#include "NewFileGui.h"
#include "FileTreeGui.h"


NewFileGui::NewFileGui(QWidget* parent/*, QTabWidget* northTabWidgetPtr*/) : QWidget(parent), completer(0)
{   
    this->setWindowIcon(QIcon(RosEnv::imagesInstallLoc + "project2.jpg") );
    this->setWindowTitle("Ride");
    
    outerLayout = new QGridLayout(this);
    newFilePage_1Ptr = new NewFilePage_1();
    newFilePage_2Ptr = new NewFilePage_2();
    newFilePage_3Ptr = new NewFilePage_3();
    newFilePage_3Ptr->setTitlePtrText(new QString("<b>Select subscriber type(s)</b>") );
    newFilePage_4Ptr = new NewFilePage_3();
    newFilePage_4Ptr->setTitlePtrText(new QString("<b>Select publisher type(s)</b>") );
    newFilePage_5Ptr = new NewFilePage_4();
    
    currentPage = PAGE_ONE;
    
    initBtns();
    
    
    
    
    this->setLayout(outerLayout);
}


void NewFileGui::setNorthTabWidgetPtr(QTabWidget* northTabWidgetPtr)
{
    this->northTabWidgetPtr = northTabWidgetPtr;
}


QTabWidget* NewFileGui::getMasterTabWidgetPtr()
{
    return northTabWidgetPtr;
}


void NewFileGui::setHighlighterPtr(Highlighter* highlighter)
{
    this->highlighterPtr = highlighter;
}


Highlighter* NewFileGui::getHighlighterPtr()
{
    return highlighterPtr;
}


void NewFileGui::handleBackBtnSlot()
{
    swapBackPage();
}


void NewFileGui::handleNextBtnSlot()
{
    swapNextPage();
}


void NewFileGui::handleFinishBtnSlot()
{
    cout << "\"Finish\" button selected" << endl;
    newFilePage_1Ptr->triggerMutators();
    cout << "successfully triggered f1" << endl;
    newFilePage_2Ptr->triggerMutators();
    cout << "successfully triggered f2" << endl;
    newFilePage_3Ptr->triggerMutators();
    cout << "successfully triggered f3" << endl;
    newFilePage_4Ptr->triggerMutators();
    cout << "successfully triggered f4" << endl;
    //newFilePage_5Ptr updates automatically
    newFilePage_5Ptr->triggerMutators();
    cout << "successfully triggered f5" << endl;
    cout << toString()->toStdString() << endl;
    
    //create file
    //- - - - - - - - - - - - - - - - - - - - - - - - - - -
    QFont font;
    font.setFamily("Monospace");
    font.setFixedPitch(true);
    font.setPointSize(10);
    font.setWeight(10);

    editor = new FileGui();
    editor->setFont(font);
    
    int tabSize = 4;
    QFontMetrics metrics(font);
    editor->setTabStopWidth(tabSize * metrics.width(' '));
    
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    completer = new QCompleter(this);
    completer->setModel(modelFromFile("wordlist.txt"));
    completer->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    editor->setCompleter(completer);
    
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
    setHighlighterPtr(highlighterPtr = new Highlighter(editor->document() ) );

    //create physical file and tab
    RFile* rideFile = new RFile(*newFilePage_5Ptr->getLocStrPtr()
                                    + "/"
                                    + *newFilePage_5Ptr->getFileNameStrPtr()
                                    + *newFilePage_5Ptr->getFileExtStrPtr() );
    //-----------------
    cout << "\t\tLoc: " << newFilePage_5Ptr->getLocStrPtr()->toStdString() << endl;
    cout << "\t\tName: " << newFilePage_5Ptr->getFileNameStrPtr()->toStdString() << endl;
    cout << "\t\tExt: " << newFilePage_5Ptr->getFileExtStrPtr()->toStdString() << endl;


    rideFile->openRdWrFile();

    QByteArray tmpBArr;
    tmpBArr.append(editor->toPlainText());
    editor->setPlainText(rideFile->readAll() );
    //add tab via "tunnel"
    northTabWidgetPtr->addTab(editor, *newFilePage_5Ptr->getFileNameStrPtr()
                                        + *newFilePage_5Ptr->getFileExtStrPtr() );
    //make it the visible one.
    northTabWidgetPtr->setCurrentIndex(/*northTabWidgetPtr->count() */1);
    
    rideFile->setParallelFileGuiPtr(editor);
    Saver::pushToRideFilePtrVec(rideFile);
    
    cout << "Successfully ended file creation sequence" << endl;
    this->close();
    
    FileTreeGui::refresh();
}


void NewFileGui::handleHelpBntSlot()
{
    ;
}


void NewFileGui::handleCancelBtnSlot()
{
    this->close();
}


QAbstractItemModel* NewFileGui::modelFromFile(const QString& fileName)
{
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly))
    {
        cout << "ERROR trying to read file" << endl;
        return new QStringListModel(completer);
    }
    else
    {
        cout << "SUCCESS reading file at NewFileGui::modelFromFile" << endl;
    }
        
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
    QStringList words;

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        if (!line.isEmpty())
            words << line.trimmed();
    }

    QApplication::restoreOverrideCursor();
    return new QStringListModel(words, completer);
}


void NewFileGui::initBtns()
{
    backBtn = new QPushButton("< Back", this);
    backBtn->setEnabled(false);
    nextBtn = new QPushButton("Next >", this);
    finishBtn = new QPushButton("Finish", this);
    finishBtn->setEnabled(false);
    helpBtn = new QPushButton("Help", this);
    cancelBtn = new QPushButton("Cancel", this);
    
    buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(backBtn);
    buttonLayout->addWidget(nextBtn);
    buttonLayout->addWidget(finishBtn);
    buttonLayout->addWidget(helpBtn);
    buttonLayout->addWidget(cancelBtn);
    
    connect(backBtn, SIGNAL(released() ), this, SLOT(handleBackBtnSlot() ) );
    connect(nextBtn, SIGNAL(released() ), this, SLOT(handleNextBtnSlot() ) );
    connect(finishBtn, SIGNAL(released() ), this, SLOT(handleFinishBtnSlot() ) );
    connect(helpBtn, SIGNAL(released() ), this, SLOT(handleHelpBntSlot() ) );
    connect(cancelBtn, SIGNAL(released() ), this, SLOT(handleCancelBtnSlot() ) );
    
    outerLayout->addWidget(newFilePage_1Ptr, 0, 0);
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignBottom);
}


void NewFileGui::swapBackPage()
{
    switch(currentPage)
    {
        case PAGE_TWO:
            unloadPage_2();
            loadPage_1();
            currentPage = PAGE_ONE;
            backBtn->setEnabled(false);
            break;
        case PAGE_THREE:
            unloadPage_3();
            loadPage_2();
            currentPage = PAGE_TWO;
            break;
        case PAGE_FOUR:
            unloadPage_4();
            loadPage_3();
            currentPage = PAGE_THREE;
            break;
        case PAGE_FIVE:
            unloadPage_5();
            loadPage_4();
            currentPage = PAGE_FOUR;
            nextBtn->setEnabled(true);
            finishBtn->setEnabled(false);
            break;
        default:
            cerr << "ERROR in switch at: NewFileGui::swapBackPage()" << endl;
    }
}


void NewFileGui::swapNextPage()
{
    switch(currentPage)
    {
        case PAGE_ONE:
            unloadPage_1();
            loadPage_2();
            currentPage = PAGE_TWO;
            backBtn->setEnabled(true);
            break;
        case PAGE_TWO:
            unloadPage_2();
            loadPage_3();
            currentPage = PAGE_THREE;
            break;
        case PAGE_THREE:
            unloadPage_3();
            loadPage_4();
            currentPage = PAGE_FOUR;
            break;
        case PAGE_FOUR:
            unloadPage_4();
            loadPage_5();
            currentPage = PAGE_FIVE;
            nextBtn->setEnabled(false);
            finishBtn->setEnabled(true);
            break;
        default:
            cerr << "ERROR in switch at: NewFileGui::swapNextPage()" << endl;
    }
}


void NewFileGui::loadPage_1()
{
    outerLayout->addWidget(newFilePage_1Ptr, 0, 0);
    newFilePage_1Ptr->setVisible(true);
    newFilePage_1Ptr->setEnabled(true);
}


void NewFileGui::unloadPage_1()
{
    outerLayout->removeWidget(newFilePage_1Ptr);
    newFilePage_1Ptr->setVisible(false);
    newFilePage_1Ptr->setEnabled(false);
}


void NewFileGui::loadPage_2()
{
    outerLayout->addWidget(newFilePage_2Ptr, 0, 0);
    newFilePage_2Ptr->setVisible(true);
    newFilePage_2Ptr->setEnabled(true);
}


void NewFileGui::unloadPage_2()
{
    outerLayout->removeWidget(newFilePage_2Ptr);
    newFilePage_2Ptr->setVisible(false);
    newFilePage_2Ptr->setEnabled(false);
}


void NewFileGui::loadPage_3()
{
    outerLayout->addWidget(newFilePage_3Ptr, 0, 0);
    newFilePage_3Ptr->setVisible(true);
    newFilePage_3Ptr->setEnabled(true);
}


void NewFileGui::unloadPage_3()
{
    outerLayout->removeWidget(newFilePage_3Ptr);
    newFilePage_3Ptr->setVisible(false);
    newFilePage_3Ptr->setEnabled(false);
}


void NewFileGui::loadPage_4()
{
    outerLayout->addWidget(newFilePage_4Ptr, 0, 0);
    newFilePage_4Ptr->setVisible(true);
    newFilePage_4Ptr->setEnabled(true);
}


void NewFileGui::unloadPage_4()
{
    outerLayout->removeWidget(newFilePage_4Ptr);
    newFilePage_4Ptr->setVisible(false);
    newFilePage_4Ptr->setEnabled(false);
}


void NewFileGui::loadPage_5()
{
    outerLayout->addWidget(newFilePage_5Ptr, 0, 0);
    newFilePage_5Ptr->setVisible(true);
    newFilePage_5Ptr->setEnabled(true);
}


void NewFileGui::unloadPage_5()
{
    outerLayout->removeWidget(newFilePage_5Ptr);
    newFilePage_5Ptr->setVisible(false);
    newFilePage_5Ptr->setEnabled(false);
}


QString* NewFileGui::toString()
{
    QString* tmp = new QString("NewProjectGui");
    tmp->append("\n- - - - - - - - - -\n");
    tmp->append(newFilePage_1Ptr->toString() );
    tmp->append("\n");
    tmp->append(newFilePage_2Ptr->toString() );
    tmp->append("\n");
    tmp->append(newFilePage_3Ptr->toString() );
    tmp->append("\n");
    tmp->append(newFilePage_5Ptr->toString() );
    
    return tmp;
}


NewFileGui::~NewFileGui()
{
    ;
}