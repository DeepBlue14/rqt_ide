#include "MasterGui.h"

MasterGui::MasterGui(QMainWindow* parent) : QMainWindow(parent)
{
    /*
    QFile file("./src/qss/Dark.css");
    file.open(QFile::ReadOnly);
    QString styleSheetStr = QLatin1String(file.readAll() );
    this->setStyleSheet(styleSheetStr);
     this->ensurePolished(); // ???
    */
    loadStyle();
    this->setWindowIcon(QIcon(RosEnv::imagesInstallLoc + "icon.jpg") );
    this->setWindowTitle("Ride");
    
    masterActions = new MasterActions();
    masterToolBtns = new MasterToolBtns();
    masterToolBars = new MasterToolBars();
    //openingGui = new OpeningGui();
    masterMenus = new MasterMenus();
    centralGui = new CentralGui();
    centralGui->passNorthTabWidgetPtr(masterActions->getNorthTabWidgetPtr() );
    
    masterToolBtns->setMasterActionsPtr(masterActions);
    //masterToolBars->setMasterActionsPtr(masterActions);
    masterToolBars->setMasterToolBtnsPtr(masterToolBtns);
    masterMenus->setMasterActionsPtr(masterActions);
    
    masterStatusBar = new MasterStatusBar();
    QStatusBar* statusBar = new QStatusBar();
    statusBar->addWidget(masterStatusBar, Qt::AlignRight);
    this->setStatusBar(statusBar);
    
    initMenus();
    initToolBtns();
    initToolBars();

    //FIXME: Should this be done in CentralGui
    this->setCentralWidget(centralGui->getNorthGuiPtr() );
    
    QDockWidget* southDock = new QDockWidget();
    southDock->setWidget(centralGui->getSouthGuiPtr() );
    this->addDockWidget(Qt::BottomDockWidgetArea, southDock);
    
    QDockWidget* eastDock1 = new QDockWidget();
    eastDock1->setWidget(centralGui->getRunPanelGuiPtr() );
    this->addDockWidget(Qt::RightDockWidgetArea, eastDock1);
    
    QDockWidget* eastDock2 = new QDockWidget();
    eastDock2->setWidget(centralGui->getNavigatorGuiPtr() );
    this->addDockWidget(Qt::RightDockWidgetArea, eastDock2);
    
    QDockWidget* westDock = new QDockWidget();
    westDock->setWidget(centralGui->getFileTreeGuiPtr() );
    this->addDockWidget(Qt::LeftDockWidgetArea, westDock);
    
    
    masterActions->setNorthTabWidgetPtr(centralGui->getNorthGuiPtr()->getTabWidget() );
    masterActions->setSouthTabWidgetPtr(centralGui->getSouthGuiPtr()/*->getTabWidget()*/ );
    masterActions->setWestWidgetPtr(centralGui->getFileTreeGuiPtr() ); // Pass ("tunnel") method
    masterActions->setEast0WidgetPtr(centralGui->getRunPanelGuiPtr() );
    masterActions->setEastWidgetPtr(centralGui->getNavigatorGuiPtr() );
    
    this->resize(1000, 800);
}


void MasterGui::initMenus()
{
    fileMenuPtr = menuBar()->addMenu(tr("&File") );
    masterMenus->initFileMenuPtr(fileMenuPtr); 
    
    editMenuPtr = menuBar()->addMenu(tr("&Edit") );
    masterMenus->initEditMenuPtr(editMenuPtr);
    
    viewMenuPtr = menuBar()->addMenu(tr("&View") );
    masterMenus->initViewMenuPtr(viewMenuPtr);
    
    navigateMenuPtr = menuBar()->addMenu(tr("&Navigate") );
    masterMenus->initNavigateMenuPtr(navigateMenuPtr);
    
    sourceMenuPtr = menuBar()->addMenu(tr("&Source") );
    masterMenus->initSourceMenuPtr(sourceMenuPtr);
    
    refactorMenuPtr = menuBar()->addMenu(tr("&Refactor") );
    masterMenus->initRefactorMenuPtr(refactorMenuPtr);
    
    runMenuPtr = menuBar()->addMenu(tr("&Run") );
    masterMenus->initRunMenuPtr(runMenuPtr);
    
    debugMenuPtr = menuBar()->addMenu(tr("&Debug") );
    masterMenus->initDebugMenuPtr(debugMenuPtr);
    
    profileMenuPtr = menuBar()->addMenu(tr("&Profile") );
    masterMenus->initProfileMenuPtr(profileMenuPtr);
    
    teamMenuPtr = menuBar()->addMenu(tr("&Team") );
    masterMenus->initTeamMenuPtr(teamMenuPtr);
    
    toolsMenuPtr = menuBar()->addMenu(tr("&Tools") );
    masterMenus->initToolsMenuPtr(toolsMenuPtr);
    
    windowMenuPtr = menuBar()->addMenu(tr("&Window") );
    masterMenus->initWindowMenuPtr(windowMenuPtr);
    
    helpMenuPtr = menuBar()->addMenu(tr("&Help") );
    masterMenus->initHelpMenuPtr(helpMenuPtr);
    
}


void MasterGui::initToolBtns()
{
    masterToolBtns->initNorthGroupOneToolBtns();
    masterToolBtns->initNorthGroupTwoToolBtns();
    masterToolBtns->initNorthGroupThreeToolBtns();
    masterToolBtns->initSouthGroupOneToolBtns();
    masterToolBtns->initEastGroupOneToolBtns();
    masterToolBtns->initWestGroupOneToolBtns();
}


void MasterGui::initToolBars()
{
    groupOneToolBarPtr = addToolBar(tr("New File") );
    addToolBar(Qt::TopToolBarArea, groupOneToolBarPtr);
    masterToolBars->initNorthGroupOneToolBar(groupOneToolBarPtr);
    
    groupTwoToolBarPtr = addToolBar(tr("Undo") );
    addToolBar(Qt::TopToolBarArea, groupTwoToolBarPtr);
    masterToolBars->initNorthGroupTwoToolBar(groupTwoToolBarPtr);

    groupThreeToolBarPtr = addToolBar(tr("Debug") );
    addToolBar(Qt::TopToolBarArea, groupThreeToolBarPtr);
    masterToolBars->initNorthGroupThreeToolBar(groupThreeToolBarPtr);

    southToolBarPtr = addToolBar(tr("South") );
    addToolBar(Qt::BottomToolBarArea, southToolBarPtr);
    masterToolBars->initSouthGroupOneToolBar(southToolBarPtr);
    
    eastToolBarPtr = addToolBar(tr("East") );
    addToolBar(Qt::RightToolBarArea, eastToolBarPtr);
    masterToolBars->initEastGroupOneToolBar(eastToolBarPtr);

    westToolBarPtr = addToolBar(tr("West") );
    addToolBar(Qt::LeftToolBarArea, westToolBarPtr);
    masterToolBars->initWestGroupOneToolBar(westToolBarPtr);
}


void MasterGui::loadStyle(QString* style)
{
    QFile file(*style);
    file.open(QFile::ReadOnly);
    QString styleSheetStr = QLatin1String(file.readAll() );
    this->setStyleSheet(styleSheetStr);
    this->ensurePolished();
}


void MasterGui::setFileMenuPtr(QMenu* fileMenuPtr)
{
    this->fileMenuPtr = fileMenuPtr;
}


QMenu* MasterGui::getFileMenuPtr()
{
    return fileMenuPtr;
}


void MasterGui::setEditMenuPtr(QMenu* editMenuPtr)
{
    this->editMenuPtr = editMenuPtr;
}


QMenu* MasterGui::getEditMenuPtr()
{
    return editMenuPtr;
}


void MasterGui::setViewMenuPtr(QMenu* viewMenuPtr)
{
    this->viewMenuPtr = viewMenuPtr;
}


QMenu* MasterGui::getViewMenuPtr()
{
    return viewMenuPtr;
}


void MasterGui::setNavigateMenuPtr(QMenu* navigateMenuPtr)
{
    this->navigateMenuPtr = navigateMenuPtr;
}


QMenu* MasterGui::getNavigateMenuPtr()
{
    return navigateMenuPtr;
}


void MasterGui::setSourceMenuPtr(QMenu* sourceMenuPtr)
{
    this->sourceMenuPtr = sourceMenuPtr;
}


QMenu* MasterGui::getSourceMenuPtr()
{
    return sourceMenuPtr;
}


void MasterGui::setRefactorMenuPtr(QMenu* refactorMenuPtr)
{
    this->refactorMenuPtr = refactorMenuPtr;
}


QMenu* MasterGui::getRefactorMenuPtr()
{
    return refactorMenuPtr;
}


void MasterGui::setRunMenuPtr(QMenu* runMenuPtr)
{
    this->runMenuPtr = runMenuPtr;
}


QMenu* MasterGui::getRunMenuPtr()
{
    return runMenuPtr;
}


void MasterGui::setDebugMenuPtr(QMenu* debugMenuPtr)
{
    this->debugMenuPtr = debugMenuPtr;
}


QMenu* MasterGui::getDebugMenuPtr()
{
    return debugMenuPtr;
}


void MasterGui::setProfileMenuPtr(QMenu* profileMenuPtr)
{
    this->profileMenuPtr = profileMenuPtr;
}


QMenu* MasterGui::getProfileMenuPtr()
{
    return profileMenuPtr;
}


void MasterGui::setTeamMenuPtr(QMenu* teamMenuPtr)
{
    this->teamMenuPtr = teamMenuPtr;
}


QMenu* MasterGui::getTeamMenuPtr()
{
    return teamMenuPtr;
}


void MasterGui::setToolsMenuPtr(QMenu* toolsMenuPtr)
{
    this->toolsMenuPtr;
}


QMenu* MasterGui::getToolsMenuPtr()
{
    return toolsMenuPtr;
}


void MasterGui::setWindowMenuPtr(QMenu* windowMenuPtr)
{
    this->windowMenuPtr = windowMenuPtr;
}


QMenu* MasterGui::getWindowMenuPtr()
{
    return windowMenuPtr;
}


void MasterGui::setHelpMenuPtr(QMenu* helpMenuPtr)
{
    this->helpMenuPtr = helpMenuPtr;
}


QMenu* MasterGui::getHelpMenuPtr()
{
    return helpMenuPtr;
}


void MasterGui::setGroupOneToolBarPtr(QToolBar* groupOneToolBarPtr)
{
    this->groupOneToolBarPtr = groupOneToolBarPtr;
}


QToolBar* MasterGui::getGroupOneToolBarPtr()
{
    return groupOneToolBarPtr;
}


void MasterGui::setGroupTwoToolBarPtr(QToolBar* groupTwoToolBarPtr)
{
    this->groupTwoToolBarPtr = groupTwoToolBarPtr;
}


QToolBar* MasterGui::getGroupTwoToolBarPtr()
{
    return groupTwoToolBarPtr;
}


void MasterGui::setGroupThreeToolBarPtr(QToolBar* groupThreeToolBarPtr)
{
    this->groupThreeToolBarPtr;
}


QToolBar* MasterGui::getGroupThreeToolBarPtr()
{
    return groupThreeToolBarPtr;
}


void MasterGui::setSouthToolBarPtr(QToolBar* southToolBarPtr)
{
    this->southToolBarPtr = southToolBarPtr;
}


QToolBar* MasterGui::getSouthToolBarPtr()
{
    return southToolBarPtr;
}


void MasterGui::setEastToolBarPtr(QToolBar* eastToolBarPtr)
{
    this->eastToolBarPtr = eastToolBarPtr;
}


QToolBar* MasterGui::getEastToolBarPtr()
{
    return eastToolBarPtr;
}


void MasterGui::setWestToolBarPtr(QToolBar* westToolBarPtr)
{
    this->westToolBarPtr = westToolBarPtr;
}


QToolBar* MasterGui::getWestToolBarPtr()
{
    return westToolBarPtr;
}


void MasterGui::setTabWidget(QTabWidget* tabWidget)
{
    this->tabWidget = tabWidget;
}


QTabWidget* MasterGui::getTabWidget()
{
    return tabWidget;
}


void MasterGui::setEditor(QTextEdit* editor)
{
    this->editor = editor;
}


QTextEdit* MasterGui::getEditor()
{
    return editor;
}


void MasterGui::setMasterActions(MasterActions* masterActions)
{
    this->masterActions = masterActions;
}


MasterActions* MasterGui::getMasterActions()
{
    return masterActions;
}


void MasterGui::setMasterToolBars(MasterToolBars* masterToolBars)
{
    this->masterToolBars = masterToolBars;
}


MasterToolBars* MasterGui::getMasterToolBars()
{
    return masterToolBars;
}


void MasterGui::setMasterMenus(MasterMenus* masterMenus)
{
    this->masterMenus = masterMenus;
}


MasterMenus* MasterGui::getMasterMenus()
{
    return masterMenus;
}


void MasterGui::setCentralGui(CentralGui* centralGui)
{
    this->centralGui = centralGui;
}


CentralGui* MasterGui::getCentralGui()
{
    return centralGui;
}


void MasterGui::closeEvent(QCloseEvent* event)
{
    cout << "Termination is eminent!!!" << endl;
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Ride",
            "Are you sure?\n", QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes);
    
    if(resBtn != QMessageBox::Yes)
    {
        event->ignore();
    }
    else
    {
        event->accept();
    }
                                                               
}


QString* MasterGui::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


MasterGui::~MasterGui()
{
    ;
}