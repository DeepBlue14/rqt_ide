/*
 * File:  FileGui.cpp
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 * 
 * Created 05/25/2015
 */

#include "FileGui.h"
#include "LineNumberArea.h"


FileGui::FileGui(QWidget* parent) : QPlainTextEdit(parent), c(0)
{
    this->setPlainText(tr("This TextEdit provides autocompletions for words that have more than"
                     " 3 characters. You can trigger autocompletion using ") +
                     QKeySequence("Ctrl+E").toString(QKeySequence::NativeText));
    
    lineNumberArea = new LineNumberArea(this);
    
    connect(this, SIGNAL(blockCountChanged(int)), this, SLOT(updateLineNumberAreaWidth(int)));
    connect(this, SIGNAL(updateRequest(QRect,int)), this, SLOT(updateLineNumberArea(QRect,int)));
    connect(this, SIGNAL(cursorPositionChanged()), this, SLOT(highlightCurrentLine()));

    updateLineNumberAreaWidth(0);
    highlightCurrentLine();
}


void FileGui::setCompleter(QCompleter* completer)
{
    if(c)
    
        QObject::disconnect(c, 0, this, 0);
        
    c = completer;
    
    if(!c)
        return;
    
    c->setWidget(this);
    c->setCompletionMode(QCompleter::PopupCompletion);
    c->setCaseSensitivity(Qt::CaseInsensitive);
    QObject::connect(completer, SIGNAL(activated(const QString&)),
                     this, SLOT(insertCompletion(const QString&)));
}


QCompleter* FileGui::completer() const
{    
    return c;
}


void FileGui::insertCompletion(const QString& completion)
{
    QTextCursor tc = textCursor();
    int extra = completion.length() - c->completionPrefix().length();
    tc.movePosition(QTextCursor::Left);
    tc.movePosition(QTextCursor::EndOfWord);
    tc.insertText(completion.right(extra));
    setTextCursor(tc);
}


QString FileGui::textUnderCursor() const
{
    QTextCursor tc = textCursor();
    tc.select(QTextCursor::WordUnderCursor);
    return tc.selectedText();
}


void FileGui::keyPressEvent(QKeyEvent* e)
{
    if(c && c->popup()->isVisible()) {
        // The following keys are forwarded by the completer to the widget
           switch (e->key()) {
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
     if (!c || !isShortcut) // don't process the shortcut when we have a completer
         QPlainTextEdit::keyPressEvent(e);

     const bool ctrlOrShift = e->modifiers() & (Qt::ControlModifier | Qt::ShiftModifier);
     if (!c || (ctrlOrShift && e->text().isEmpty()))
         return;

     static QString eow("~!@#$%^&*()_+{}|:\"<>?,./;'[]\\-="); // end of word
     bool hasModifier = (e->modifiers() != Qt::NoModifier) && !ctrlOrShift;
     QString completionPrefix = textUnderCursor();
     
     //------------------------------------------
     //!!! this inserts the closing parens !!!
     if(e->text() == "(")
     {   QTextCursor tc = textCursor();
        int extra = 0;
        tc.movePosition(QTextCursor::Left);
        tc.movePosition(QTextCursor::EndOfWord);
        tc.insertText(textUnderCursor().right(extra));
        tc.insertText(")");
        tc.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 1);
        setTextCursor(tc);
     }
     
     if(e->text() == "[")
     {   QTextCursor tc = textCursor();
        int extra = 0;
        tc.movePosition(QTextCursor::Left);
        tc.movePosition(QTextCursor::EndOfWord);
        tc.insertText(textUnderCursor().right(extra));
        tc.insertText("]");
        tc.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 1);
        setTextCursor(tc);
     }
     
     
     if(e->text() == "{")
     {   QTextCursor tc = textCursor();
        int extra = 0;
        tc.movePosition(QTextCursor::Left);
        tc.movePosition(QTextCursor::EndOfWord);
        tc.insertText(textUnderCursor().right(extra));
        tc.insertText("\n}");
        tc.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 1);
        setTextCursor(tc);
     }
     //------------------------------------------
        
     if (!isShortcut && (hasModifier || e->text().isEmpty()|| completionPrefix.length() < 3
                       || eow.contains(e->text().right(1)))) {
         c->popup()->hide();
         return;
     }

     if (completionPrefix != c->completionPrefix()) {
         c->setCompletionPrefix(completionPrefix);
         c->popup()->setCurrentIndex(c->completionModel()->index(0, 0));
     }
     QRect cr = cursorRect();
     cr.setWidth(c->popup()->sizeHintForColumn(0)
                 + c->popup()->verticalScrollBar()->sizeHint().width());
     c->complete(cr); // popup it up!
}


int FileGui::lineNumberAreaWidth()
{
    int digits = 1;
    int max = qMax(1, blockCount());
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
    setViewportMargins(lineNumberAreaWidth(), 0, 0, 0);
}


void FileGui::updateLineNumberArea(const QRect& rect, int dy)
{
    if(dy)
        lineNumberArea->scroll(0, dy);
    else
        lineNumberArea->update(0, rect.y(), lineNumberArea->width(), rect.height());
    
    if(rect.contains(viewport()->rect()))
        updateLineNumberAreaWidth(0);
}


void FileGui::resizeEvent(QResizeEvent* e)
{
    QPlainTextEdit::resizeEvent(e);
    
    QRect cr = contentsRect();
    lineNumberArea->setGeometry(QRect(cr.left(), cr.top(), lineNumberAreaWidth(), cr.height()));
}


void FileGui::highlightCurrentLine()
{
    QList<QTextEdit::ExtraSelection> extraSelections;
    
    if(!isReadOnly() )
    {
        QTextEdit::ExtraSelection selection;
        
        //QColor lineColor = QColor(Qt::yellow).lighter(160);
        QColor lineColor = QColor(224, 232, 241);
        
        selection.format.setBackground(lineColor);
        selection.format.setProperty(QTextFormat::FullWidthSelection, true);
        selection.cursor = textCursor();
        selection.cursor.clearSelection();
        extraSelections.append(selection);
        
        
        QString text;
        QTextCursor tc = textCursor();
        text = tc.block().text();
        if((tc.positionInBlock() > 0) && (text.size() > 0) )
            cout << "contents of false cursor: " << text.at(tc.positionInBlock() - 1).toLatin1() << endl;
        cout << "position of \"true\" cursor: " << tc.positionInBlock() << endl;
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

    while(block.isValid() && top <= event->rect().bottom())
    {
        if (block.isVisible() && bottom >= event->rect().top())
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


FileGui::~FileGui()
{
    ;
}