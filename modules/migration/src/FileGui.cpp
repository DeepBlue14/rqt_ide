#include "FileGui.h"
#include "LineNumberArea.h"
#include "CodeFoldingArea.h"
#include "Saver.h"


FileGui::FileGui(QWidget* parent) : QPlainTextEdit(parent), completerPtr(0)
{
    this->setPlainText(tr("This TextEdit provides autocompletions for words that have more than"
                          " 3 characters. You can trigger autocompletion using ") +
                          QKeySequence("Ctrl+E").toString(QKeySequence::NativeText));
    
    lineNumberArea = new LineNumberArea(this);
    codeFoldArea = new CodeFoldingArea(this);
    
    connect(this, SIGNAL(blockCountChanged(int )), this, SLOT(updateLineNumberAreaWidth(int )) );
    connect(this, SIGNAL(updateRequest(QRect, int )), this, SLOT(updateLineNumberArea(QRect, int )) );
    connect(this, SIGNAL(cursorPositionChanged()), this, SLOT(highlightCurrentLine()) );
    
    //this->setMouseTracking(true);

    updateLineNumberAreaWidth(0);
    highlightCurrentLine();
}


void FileGui::setCompleter(QCompleter* completer)
{
    if(completerPtr)
    
        QObject::disconnect(completerPtr, 0, this, 0);
        
    completerPtr = completer;
    
    if(!completerPtr)
        return;
    
    completerPtr->setWidget(this);
    completerPtr->setCompletionMode(QCompleter::PopupCompletion);
    completerPtr->setCaseSensitivity(Qt::CaseInsensitive);
    QObject::connect(completer, SIGNAL(activated(const QString&)),
                     this, SLOT(insertCompletion(const QString&)) );
}


QCompleter* FileGui::completer() const
{    
    return completerPtr;
}


void FileGui::insertCompletion(const QString& completion)
{
    QTextCursor tc = textCursor();
    int extra = completion.length() - completerPtr->completionPrefix().length();
    tc.movePosition(QTextCursor::Left);
    tc.movePosition(QTextCursor::EndOfWord);
    tc.insertText(completion.right(extra) );
    setTextCursor(tc);
}


QString FileGui::wordUnderCursor() const
{
    QTextCursor tc = textCursor();
    tc.select(QTextCursor::WordUnderCursor);
    return tc.selectedText();
}


void FileGui::keyPressEvent(QKeyEvent* e)
{
    cout << "user modified the program (@ FileGui::keyPressEvent(...) )" << endl;
    //MasterActions.getSaveAllActionPtr()->setEnabled(true);
    if(completerPtr && completerPtr->popup()->isVisible() )
    {
        // The following keys are forwarded by the completer to the widget
        switch (e->key() )
        {
            case Qt::Key_Enter:
            case Qt::Key_Return:
            case Qt::Key_Escape:
            case Qt::Key_Tab:
            case Qt::Key_Backtab:
                e->ignore();
                return; // let the completer do default behavior
            default:
                break;
        }
    }
    
    bool isShortcut = ((e->modifiers() & Qt::ControlModifier) && e->key() == Qt::Key_E); // CTRL+E
    if (!completerPtr || !isShortcut) // don't process the shortcut when we have a completer
    {
        QPlainTextEdit::keyPressEvent(e);
    }

    const bool ctrlOrShift = e->modifiers() & (Qt::ControlModifier | Qt::ShiftModifier);
    if(!completerPtr || (ctrlOrShift && e->text().isEmpty()) )
    {
        return;
    }

    static QString eow("~!@#$%^&*()_+{}|:\"<>?,./;'[]\\-="); // end of word
    bool hasModifier = (e->modifiers() != Qt::NoModifier) && !ctrlOrShift;
    QString completionPrefix = wordUnderCursor();
     
    //------------------------------------------
    //!!! this inserts the closing parens !!!
    if(e->text() == "(")
    {   QTextCursor tc = textCursor();
        int extra = 0;
        tc.movePosition(QTextCursor::Left);
        tc.movePosition(QTextCursor::EndOfWord);
        tc.insertText(wordUnderCursor().right(extra));
        tc.insertText(")");
        tc.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 1);
        setTextCursor(tc);
    }
    
    if(e->text() == "[")
    {   QTextCursor tc = textCursor();
        int extra = 0;
        tc.movePosition(QTextCursor::Left);
        tc.movePosition(QTextCursor::EndOfWord);
        tc.insertText(wordUnderCursor().right(extra));
        tc.insertText("]");
        tc.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 1);
        setTextCursor(tc);
    }
     
     
    if(e->text() == "{")
    {   QTextCursor tc = textCursor();
        int extra = 0;
        tc.movePosition(QTextCursor::Left);
        tc.movePosition(QTextCursor::EndOfWord);
        tc.insertText(wordUnderCursor().right(extra));
        tc.insertText("\n}");
        tc.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 1);
        setTextCursor(tc);
        
        tc.insertText("    \n");
        tc.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 1);
        setTextCursor(tc);
    }
    
    // Adding ";" to other side of ")", if (...)
    QTextCursor tcg = textCursor();

    if(tcg.block().text().size() > 0)
    {
        cout << "\nchar on the right end: " << tcg.block().text().at(tcg.block().text().size() - 1).toLatin1() << endl;
    }
        
    cout << "key just entered: " << e->text().toStdString() << endl;
    cout << "number of chars to the " << cct::bold("left") << " of cursor: " << tcg.positionInBlock() << endl;
    cout << "number of chars to the " << cct::bold("right") << " of cursor: " << tcg.block().text().size() - tcg.positionInBlock() << "\n" << endl;

    bool isClosingParens = true;
    for(size_t i = 0; i < (tcg.block().text().size() - tcg.positionInBlock()); i++)
    {
        char ch = tcg.block().text().at(tcg.block().text().size() - (1 + i)).toLatin1();
        if(QString(ch) != ")")
        {
            isClosingParens = false;
        }
    }
    if(isClosingParens == true  && e->text() == ";")
    {
        cout << "Hop semicolon" << endl;
        tcg.deletePreviousChar();
        tcg.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor, (tcg.block().text().size() - tcg.positionInBlock()) );
        tcg.insertText(";");
        setTextCursor(tcg);
    }


    //------------------------------------------

    if(!isShortcut && (hasModifier || e->text().isEmpty() || completionPrefix.length() < 3
                       || eow.contains(e->text().right(1))) )
    {
        completerPtr->popup()->hide();
        return;
    }

    if (completionPrefix != completerPtr->completionPrefix() )
    {
        completerPtr->setCompletionPrefix(completionPrefix);
        completerPtr->popup()->setCurrentIndex(completerPtr->completionModel()->index(0, 0) );
    }
    QRect cr = cursorRect();
    cr.setWidth(completerPtr->popup()->sizeHintForColumn(0)
              + completerPtr->popup()->verticalScrollBar()->sizeHint().width() );
    completerPtr->complete(cr); // popup it up!
}


int FileGui::lineNumberAreaWidth()
{
    int digits = 1;
    int max = qMax(1, blockCount() );
    while(max >= 10)
    {
        max /= 10;
        digits++;
    }
    
    int space = 3 + fontMetrics().width(QLatin1Char('9')) * digits;
    
    return space;
}


int FileGui::codeFoldingAreaWidth()
{
    int digits = 1;
    int max = qMax(1, blockCount() );
    while(max >= 10)
    {
        max /= 10;
        digits++;
    }
    
    int space = 3 + fontMetrics().width(QLatin1Char('9')) * digits;
    
    return space;
}


void FileGui::updateLineNumberAreaWidth(int )
{
    setViewportMargins(lineNumberAreaWidth()*2, 0, 0, 0);
}


void FileGui::updateLineNumberArea(const QRect& rect, int dy)
{
    if(dy)
    {
        lineNumberArea->scroll(0, dy);
        codeFoldArea->scroll(0, dy);
    }
    else
    {
        lineNumberArea->update(0, rect.y(), lineNumberArea->width(), rect.height() );
        codeFoldArea->update(0, rect.y(), lineNumberArea->width(), rect.height() );
    }
    
    if(rect.contains(viewport()->rect()) )
    {
        updateLineNumberAreaWidth(0);
    }
    
    
}


void FileGui::resizeEvent(QResizeEvent* e)
{
    QPlainTextEdit::resizeEvent(e);
    
    QRect cr = contentsRect();
    lineNumberArea->setGeometry(QRect(cr.left(), cr.top(), lineNumberAreaWidth(), cr.height()) );
    codeFoldArea->setGeometry(QRect(lineNumberAreaWidth(), cr.top(), lineNumberAreaWidth(), cr.height()) );
    
}


void FileGui::highlightCurrentLine()
{
    QList<QTextEdit::ExtraSelection> extraSelections;
    
    if(!isReadOnly() )
    {
        QTextEdit::ExtraSelection selection;
        
        QColor lineColor = QColor(224, 232, 241);
        
        selection.format.setBackground(lineColor);
        selection.format.setProperty(QTextFormat::FullWidthSelection, true);
        selection.cursor = textCursor();
        selection.cursor.clearSelection();
        extraSelections.append(selection);
        
        
        QTextCursor tc = textCursor();
        if((tc.positionInBlock() > 0) && (tc.block().text().size() > 0) )
        {
            ;//cout << "contents of false cursor: " << tc.block().text().at(tc.positionInBlock() - 1).toLatin1() << endl;
        }
        //cout << "position of \"true\" cursor: " << tc.positionInBlock() << endl;
        
    }
    
    setExtraSelections(extraSelections);
}


void FileGui::lineNumberAreaPaintEvent(QPaintEvent* event)
{
    QPainter painter(lineNumberArea);
    painter.fillRect(event->rect(), Qt::lightGray);


    QTextBlock block = firstVisibleBlock();
    int blockNumber = block.blockNumber();
    int top = (int) blockBoundingGeometry(block).translated(contentOffset()).top();
    int bottom = top + (int) blockBoundingRect(block).height();

    while(block.isValid() && top <= event->rect().bottom() )
    {
        if (block.isVisible() && bottom >= event->rect().top() )
        {
            QString number = QString::number(blockNumber + 1);
            painter.setPen(Qt::black);
            painter.drawText(0, top, lineNumberArea->width(), fontMetrics().height(),
                             Qt::AlignRight, number);
        }

        block = block.next();
        top = bottom;
        bottom = top + (int) blockBoundingRect(block).height();
        
        blockNumber++;
    }
    
    
    
}


void FileGui::codeFoldingAreaPaintEvent(QPaintEvent* event)
{
    QPainter cfaPainter(codeFoldArea);
    cfaPainter.fillRect(event->rect(), QColor(Qt::blue).lighter(150) );
    
    
    QTextBlock block2 = firstVisibleBlock();
    //int blockNumber2 = block2.blockNumber();
    int top2 = (int) blockBoundingGeometry(block2).translated(contentOffset()).top();
    int bottom2 = top2 + (int) blockBoundingRect(block2).height();

    while(block2.isValid() && top2 <= event->rect().bottom() )
    {
        if (block2.isVisible() && bottom2 >= event->rect().top() )
        {
            QPixmap pixmap;
            pixmap.load(RosEnv::imagesInstallLoc + "plus.jpg");
            //cfaPainter.drawPixmap(0, top2, codeFoldArea->width()/2, fontMetrics().height()/2, pixmap);
        }

        block2 = block2.next();
        top2 = bottom2;
        bottom2 = top2 + (int) blockBoundingRect(block2).height();
        
        //blockNumber2++;
    }

}


void FileGui::closeEvent(QCloseEvent* event)
{
    cout << "@ FileGui::closeEvent(QCloseEvent* event)" << endl;
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Ride",
            "Would you like to save before closing?\n", QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes);
    
    if(resBtn != QMessageBox::Yes)
    {
        event->ignore();
    }
    else
    {
        Saver::save(); // Save all files
        event->accept();
    }
                                                               
}


void FileGui::closeEvent(QCloseEvent* event, int tabIndex)
{
    cout << "@ FileGui::closeEvent(QCloseEvent* event, int tabIndex)" << endl;
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Ride",
            "Would you like to save before closing?\n", QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes);
    
    if(resBtn != QMessageBox::Yes)
    {
        event->ignore();
    }
    else
    {
        Saver::save(tabIndex); // Save closed file
        event->accept();
    }
}


QString* FileGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***METHOD STUB***");
    
    return tmp;
}


FileGui::~FileGui()
{
    ;
}