#include "MasterActions.h"
#include "OutputGui.h"


MasterActions::MasterActions(QWidget* parent) : QWidget(parent)
{
    runGuiPtr = new RunSetupGui();
    openProjectGuiPtr = new OpenProjectGui();
    buildPtr = new Build();
    
    northGroupOneActPtrVecPtr = new QVector<QAction*>();
    northGroupTwoActPtrVecPtr = new QVector<QAction*>();
    northGroupThreeActPtrVecPtr = new QVector<QAction*>();
    northActPtrVecPtr = new QVector<QAction*>();
    southActPtrVecPtr = new QVector<QAction*>();
    eastActPtrVecPtr = new QVector<QAction*>();
    westActPtrVecPtr = new QVector<QAction*>();
    
    // North
    newFileActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "newFile01.png"), tr("&New File"), this);
    newFileActionPtr->setShortcut(QKeySequence::New);
    newFileActionPtr->setStatusTip("New File");
    connect(newFileActionPtr, SIGNAL(triggered() ), this, SLOT(handleNewFileActionSlot() ) );
    
    newTerminalActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "terminal01.png"), tr("&New Terminal"), this);
    newTerminalActionPtr->setShortcut(QKeySequence::New);
    newTerminalActionPtr->setStatusTip("New Terminal");
    connect(newTerminalActionPtr, SIGNAL(triggered() ), this, SLOT(handleNewTerminalActionSlot() ) );
    
    newProjectActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "newProject01.png"), tr("&New Project"), this);
    newProjectActionPtr->setShortcut(QKeySequence::New);
    newProjectActionPtr->setStatusTip("New Project");
    connect(newProjectActionPtr, SIGNAL(triggered() ), this, SLOT(handleNewProjectActionSlot() ) );
    
    openProjectActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "openProject01.png"), tr("&Open Project"), this);
    openProjectActionPtr->setShortcut(QKeySequence::New);
    openProjectActionPtr->setStatusTip("Open Existing Project");
    connect(openProjectActionPtr, SIGNAL(triggered() ), this, SLOT(handleOpenProjectActionSlot() ) );
    
    saveAllActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "save01.png"), tr("&Save All"), this);
    saveAllActionPtr->setShortcut(QKeySequence::New);
    saveAllActionPtr->setStatusTip("Save All");
    connect(saveAllActionPtr, SIGNAL(triggered() ), this, SLOT(handleSaveAllActionSlot() ) );
    
    undoActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "undo01.png"), tr("&Undo"), this);
    undoActionPtr->setShortcut(QKeySequence::New);
    undoActionPtr->setStatusTip("Undo");
    connect(undoActionPtr, SIGNAL(triggered() ), this, SLOT(handleUndoActionSlot() ) );
    
    redoActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "redo01.png"), tr("&Redo"), this);
    redoActionPtr->setShortcut(QKeySequence::New);
    redoActionPtr->setStatusTip("Redo");
    connect(redoActionPtr, SIGNAL(triggered() ), this, SLOT(handleRedoActionSlot() ) );

    setProjectConfigActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "generate01.png"), tr("&set Project Configuration"), this);
    setProjectConfigActionPtr->setShortcut(QKeySequence::New);
    setProjectConfigActionPtr->setStatusTip("Configure");
    connect(setProjectConfigActionPtr, SIGNAL(triggered() ), this, SLOT(handleSetProjectConfigActionSlot() ) );
    
    buildActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "build01.png"), tr("&Build Project"), this);
    buildActionPtr->setShortcut(QKeySequence::New);
    buildActionPtr->setStatusTip("Build");
    connect(buildActionPtr, SIGNAL(triggered() ), this, SLOT(handleBuildActionSlot() ) );
    
    cleanAndBuildActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "cleanAndBuild01.png"), tr("&Clean and Build Project"), this);
    cleanAndBuildActionPtr->setShortcut(QKeySequence::New);
    cleanAndBuildActionPtr->setStatusTip("Clean and Build");
    connect(cleanAndBuildActionPtr, SIGNAL(triggered() ), this, SLOT(handleCleanAndBuildActionSlot() ) );
    
    configForRunActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "configForRun01.png"), tr("&Configure for Execution"), this);
    configForRunActionPtr->setShortcut(QKeySequence::New);
    configForRunActionPtr->setStatusTip("Configure for execution");
    connect(configForRunActionPtr, SIGNAL(triggered() ), this, SLOT(handleConfigForRunActionSlot() ) );
    
    runActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "run01.png"), tr("&Run Project"), this);
    runActionPtr->setShortcut(QKeySequence::New);
    runActionPtr->setStatusTip("Run Project");
    connect(runActionPtr, SIGNAL(triggered() ), this, SLOT(handleRunActionSlot() ) );
    
    debugActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "debug01.png"), tr("&Debug Project"), this);
    debugActionPtr->setShortcut(QKeySequence::New);
    debugActionPtr->setStatusTip("Debug");
    connect(debugActionPtr, SIGNAL(triggered() ), this, SLOT(handleDebugActionSlot() ) );
    
    gitActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "github01.png"), tr("&Git/GitHub"), this);
    gitActionPtr->setShortcut(QKeySequence::New);
    gitActionPtr->setStatusTip("Git");
    connect(gitActionPtr, SIGNAL(triggered() ), this, SLOT(handleGitActionSlot() ) );

    // South
    outputSouthActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "output.jpg"), tr("&Output"), this);
    outputSouthActionPtr->setShortcut(QKeySequence::New);
    outputSouthActionPtr->setStatusTip("Output");
    connect(outputSouthActionPtr, SIGNAL(triggered() ), this, SLOT(handleOutputSouthActionSlot() ) );
    
    terminalSouthActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "terminal01.png"), tr("&Output"), this);
    terminalSouthActionPtr->setShortcut(QKeySequence::New);
    terminalSouthActionPtr->setStatusTip("Terminal");
    connect(terminalSouthActionPtr, SIGNAL(triggered() ), this, SLOT(handleTerminalSouthActionSlot() ) );
    
    // East
    runEastActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "rocket.jpg"), tr("&Launcher"), this);
    runEastActionPtr->setShortcut(QKeySequence::New);
    runEastActionPtr->setStatusTip("Launcher");
    connect(runEastActionPtr, SIGNAL(triggered() ), this, SLOT(handleRunEastActionSlot() ) );
    
    navEastActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "navigator01.png"), tr("&Output"), this);
    navEastActionPtr->setShortcut(QKeySequence::New);
    navEastActionPtr->setStatusTip("Navigator");
    connect(navEastActionPtr, SIGNAL(triggered() ), this, SLOT(handleNavEastActionSlot() ) );
    
    // West
    projectWestActionPtr = new QAction(QIcon(RosEnv::imagesInstallLoc + "tree01.png"), tr("&Output"), this);
    projectWestActionPtr->setShortcut(QKeySequence::New);
    projectWestActionPtr->setStatusTip("Project Tree");
    connect(projectWestActionPtr, SIGNAL(triggered() ), this, SLOT(handleProjectWestActionSlot() ) );
    
    
}


void MasterActions::handleNewFileActionSlot()
{
    newFileGuiPtr = new NewFileGui();
    newFileGuiPtr->setNorthTabWidgetPtr(northTabWidgetPtr);
    newFileGuiPtr->show();
}

void MasterActions::handleNewTerminalActionSlot()
{
    cout << "New Terminal activated" << endl;
    
    QXTerm* term = new QXTerm();
    northTabWidgetPtr->addTab(term, tr("RosTerm"));
    northTabWidgetPtr->setCurrentIndex( (northTabWidgetPtr->children().size() - 1) );
    term->start();
}


void MasterActions::handleNewProjectActionSlot()
{
    newProjectGuiPtr = new NewProjectGui();
    newProjectGuiPtr->show();
}


void MasterActions::handleOpenProjectActionSlot()
{
    openProjectGuiPtr->show();
}


void MasterActions::handleSaveAllActionSlot()
{
    Saver::save();
}


void MasterActions::handleUndoActionSlot()
{
    ;
}


void MasterActions::handleRedoActionSlot()
{
    ;
}


void MasterActions::handleSetProjectConfigActionSlot()
{
    ;
}


void MasterActions::handleBuildActionSlot()
{
    MasterStatusBar::getProgressBar()->setVisible(true);
    RProcess* rprocess = new RProcess();
    rprocess->setOutputLocTePtr(southTabWidgetPtr->getOutputTePtr() );
    rprocess->start/*Detached*/("catkin_make"); // pass output tab to rprocess?
    cout << "# of child tabs: " << southTabWidgetPtr->children().size() << endl;
    southTabWidgetPtr->getTabWidget()->setTabText(0, "Overriding!");
    //southTabWidgetPtr->dumpToGui(new QString("compiling..."));
    MasterStatusBar::getProgressBar()->setVisible(false);
}


void MasterActions::handleCleanAndBuildActionSlot()
{
    cout << "At MasterActions::handleCleanAndBuildActionSlot(), assuming that ros workspace"
         << "\nis two directories above project root dir" << endl;
    QProcess* build = new QProcess();
    build->setWorkingDirectory("./../../" + *openProjectGuiPtr->getProjectStrPtr() );
    build->start("catkin_make");
}


void MasterActions::handleConfigForRunActionSlot()
{
    runGuiPtr->reset();
    runGuiPtr->show();
}


void MasterActions::handleRunActionSlot()
{
    RProcess* rprocess = new RProcess();
    rprocess->setOutputLocTePtr(southTabWidgetPtr->getOutputTePtr() );
    QStringList* tmpStrLstPtr = new QStringList();
    cout << "!!!: " << runGuiPtr->getRunPage_2Ptr()->getPkgStrPtr().toStdString();
    cout << "!!!: " << runGuiPtr->getRunPage_2Ptr()->getFileStrPtr().toStdString() << endl;
    tmpStrLstPtr->push_back(runGuiPtr->getRunPage_2Ptr()->getPkgStrPtr() );
    tmpStrLstPtr->push_back(runGuiPtr->getRunPage_2Ptr()->getFileStrPtr() );
    rprocess->start/*Detached*/("roslaunch", *tmpStrLstPtr);
}


void MasterActions::handleDebugActionSlot()
{
    ;
}


void MasterActions::handleGitActionSlot()
{
    ;
}


// South
void MasterActions::handleOutputSouthActionSlot()
{
    if(getSouthTabWidgetPtr()->getTabWidget()->isVisible() )
    {
        getSouthTabWidgetPtr()->getTabWidget()->hide();
    }
    else
    {
        getSouthTabWidgetPtr()->getTabWidget()->show();
    }
}


void MasterActions::handleTerminalSouthActionSlot()
{
    cout << "New Terminal activated" << endl;
    
    QXTerm* term = new QXTerm();
    southTabWidgetPtr->getTabWidget()->addTab(term, tr("RosTerm"));
    
    term->start();
}


// East
void MasterActions::handleRunEastActionSlot()
{
    if(getEast0WidgetPtr()->isVisible() )
    {
        getEast0WidgetPtr()->hide();
    }
    else
    {
        getEast0WidgetPtr()->show();
    }
}


void MasterActions::handleNavEastActionSlot()
{
    if(getEastWidgetPtr()->isVisible() )
    {
        getEastWidgetPtr()->hide();
    }
    else
    {
        getEastWidgetPtr()->show();
    }
}


// West
void MasterActions::handleProjectWestActionSlot()
{
    if(getWestWidgetPtr()->isVisible() )
    {
        getWestWidgetPtr()->hide();
    }
    else
    {
        getWestWidgetPtr()->show();
    }
}

//-----------------END of slots-----------------

void MasterActions::initActions()
{
    ;
}


void MasterActions::groupActions()
{
    //northGroupOneActPtrVecPtr->push_back()
}


QVector<QAction*>* MasterActions::getNorthGroupOneActPtrVecPtr()
{
    return northGroupOneActPtrVecPtr;
}


QVector<QAction*>* MasterActions::getNorthGroupTwoActPtrVecPtr()
{
    return northGroupTwoActPtrVecPtr;
}


QVector<QAction*>* MasterActions::getNorthGroupThreeActPtrVecPtr()
{
    return northGroupThreeActPtrVecPtr;
}


QVector<QAction*>* MasterActions::getNorthActPtrVecPtr()
{
    return northActPtrVecPtr;
}


QVector<QAction*>* MasterActions::getSouthActPtrVecPtr()
{
    return southActPtrVecPtr;
}


QVector<QAction*>* MasterActions::getEastActPtrVecPtr()
{
    return eastActPtrVecPtr;
}


QVector<QAction*>* MasterActions::getWestActPtrVecPtr()
{
    return westActPtrVecPtr;
}


void MasterActions::setNorthTabWidgetPtr(QTabWidget* northTabWidgetPtr)
{
    this->northTabWidgetPtr = northTabWidgetPtr;
}


QTabWidget* MasterActions::getNorthTabWidgetPtr()
{
    return northTabWidgetPtr;
}


void MasterActions::setSouthTabWidgetPtr(OutputGui* /*QTabWidget**/ southTabWidgetPtr)
{
    this->southTabWidgetPtr = southTabWidgetPtr;
}


OutputGui* /*QTabWidget**/ MasterActions::getSouthTabWidgetPtr()
{
    return southTabWidgetPtr;
}


void MasterActions::setHighlighter(Highlighter* highlighter)
{
    this->highlighter = highlighter;
}


Highlighter* MasterActions::getHighlighter()
{
    return highlighter;
}


void MasterActions::setNewFileGuiPtr(NewFileGui* newFileGuiPtr)
{
    this->newFileGuiPtr = newFileGuiPtr;
}


NewFileGui* MasterActions::getNewFileGuiPtr()
{
    return newFileGuiPtr;
}


void MasterActions::setNewProjectGuiPtr(NewProjectGui* newProjectGuiPtr)
{
    this->newProjectGuiPtr = newProjectGuiPtr;
}


NewProjectGui* MasterActions::getNewProjectGuiPtr()
{
    return newProjectGuiPtr;
}


void MasterActions::setTerminalPtr(QXTerm* terminalPtr)
{
    this->terminalPtr = terminalPtr;
}


QXTerm* MasterActions::getTerminalPtr()
{
    return terminalPtr;
}


void MasterActions::setRunGuiPtr(RunSetupGui* runGuiPtr)
{
    this->runGuiPtr = runGuiPtr;
}


RunSetupGui* MasterActions::getRunGuiPtr()
{
    return runGuiPtr;
}


void MasterActions::setOpenProjectGuiPtr(OpenProjectGui* openProjectGuiPtr)
{
    this->openProjectGuiPtr = openProjectGuiPtr;
}


OpenProjectGui* MasterActions::getOpenProjectGuiPtr()
{
    return openProjectGuiPtr;
}


void MasterActions::setWestWidgetPtr(FileTreeGui* fileTreeGuiPtr)
{
    this->westWidgetPtr = fileTreeGuiPtr;
    fileTreeGuiPtr->setNorthTabWidgetPtr(getNorthTabWidgetPtr() ); //allow interaction between filetree and file tabs
    cout << cct::yellow("move line at: MasterActions::setWestWidgetPtr(...)") << endl;
}


FileTreeGui* MasterActions::getWestWidgetPtr()
{
    return westWidgetPtr;
}


void MasterActions::setEast0WidgetPtr(RunPanelGui* east0WidgetPtr)
{
    this->east0WidgetPtr = east0WidgetPtr;
}


RunPanelGui* MasterActions::getEast0WidgetPtr()
{
    return east0WidgetPtr;
}


void MasterActions::setEastWidgetPtr(NavigatorGui* eastWidgetPtr)
{
    this->eastWidgetPtr = eastWidgetPtr;
}


NavigatorGui* MasterActions::getEastWidgetPtr()
{
    return eastWidgetPtr;
}


void MasterActions::setBuildPtr(Build* buildPtr)
{
    this->buildPtr = buildPtr;
}


Build* MasterActions::getBuildPtr()
{
    return buildPtr;
}


// Accessors and Mutators for actions
void MasterActions::setNewFileActionPtr(QAction* newFileActionPtr)
{
    this->newFileActionPtr = newFileActionPtr;
}


QAction* MasterActions::getNewFileActionPtr()
{
    return newFileActionPtr;
}


void MasterActions::setNewTerminalActionPtr(QAction* newTerminalActionPtr)
{
    this->newTerminalActionPtr = newTerminalActionPtr;
}


QAction* MasterActions::getNewTerminalActionPtr()
{
    return newTerminalActionPtr;
}


void MasterActions::setNewProjectActionPtr(QAction* newProjectActionPtr)
{
    this->newProjectActionPtr = newProjectActionPtr;
}


QAction* MasterActions::getNewProjectActionPtr()
{
    return newProjectActionPtr;
}


void MasterActions::setOpenProjectActionPtr(QAction* openProjectActionPtr)
{
    this->openProjectActionPtr = openProjectActionPtr;
}


QAction* MasterActions::getOpenProjectActionPtr()
{
    return openProjectActionPtr;
}


void MasterActions::setSaveAllActionPtr(QAction* saveAllActionPtr)
{
    this->saveAllActionPtr = saveAllActionPtr;
}


QAction* MasterActions::getSaveAllActionPtr()
{
    return saveAllActionPtr;
}


void MasterActions::setUndoActionPtr(QAction* undoActionPtr)
{
    this->undoActionPtr = undoActionPtr;
}


QAction* MasterActions::getUndoActionPtr()
{
    return undoActionPtr;
}


void MasterActions::setRedoActionPtr(QAction* redoActionPtr)
{
    this->redoActionPtr = redoActionPtr;
}


QAction* MasterActions::getRedoActionPtr()
{
    return redoActionPtr;
}


void MasterActions::setSetProjectConfigActionPtr(QAction* setProjectConfigActionPtr)
{
    this->setProjectConfigActionPtr = setProjectConfigActionPtr;
}


QAction* MasterActions::getSetProjectConfigActionPtr()
{
    return setProjectConfigActionPtr;
}


void MasterActions::setBuildActionPtr(QAction* buildActionPtr)
{
    this->buildActionPtr = buildActionPtr;
}


QAction* MasterActions::getBuildActionPtr()
{
    return buildActionPtr; 
}


void MasterActions::setCleanAndBuildActionPtr(QAction* cleanAndBuildActionPtr)
{
    this->cleanAndBuildActionPtr = cleanAndBuildActionPtr;
}


QAction* MasterActions::getCleanAndBuildActionPtr()
{
    return cleanAndBuildActionPtr;
}


void MasterActions::setConfigForRunActionPtr(QAction* configForRunActionPtr)
{
    this->configForRunActionPtr = configForRunActionPtr;
}


QAction* MasterActions::getConfigForRunActionPtr()
{
    return configForRunActionPtr;
}


void MasterActions::setRunActionPtr(QAction* runActionPtr)
{
    this->runActionPtr = runActionPtr;
}


QAction* MasterActions::getRunActionPtr()
{
    return runActionPtr;
}


void MasterActions::setDebugActionPtr(QAction* degugActionPtr)
{
    this->debugActionPtr = debugActionPtr;
}


QAction* MasterActions::getDebugActionPtr()
{
    return debugActionPtr;
}


void MasterActions::setGitActionPtr(QAction* gitActionPtr)
{
    this->gitActionPtr = gitActionPtr;
}


QAction* MasterActions::getGitActionPtr()
{
    return gitActionPtr;
}


// South
void MasterActions::setOutputSouthActionPtr(QAction* outputSouthActionPtr)
{
    this->outputSouthActionPtr = outputSouthActionPtr;
}


QAction* MasterActions::getOutputSouthActionPtr()
{
    return outputSouthActionPtr;
}


void MasterActions::setTerminalSouthActionPtr(QAction* terminalSouthActionPtr)
{
    this->terminalSouthActionPtr = terminalSouthActionPtr;
}


QAction* MasterActions::getTerminalSouthActionPtr()
{
    return terminalSouthActionPtr;
}


// East
void MasterActions::setRunEastActionPtr(QAction* runEastActionPtr)
{
    this->runEastActionPtr = runEastActionPtr;
}


QAction* MasterActions::getRunEastActionPtr()
{
    return runEastActionPtr;
}


void MasterActions::setNavEastActionPtr(QAction* navWestActionPtr)
{
    this->navEastActionPtr = navWestActionPtr;
}


QAction* MasterActions::getNavEastActionPtr()
{
    return navEastActionPtr;
}


// West
void MasterActions::setProjectWestActionPtr(QAction* projectWestActionPtr)
{
    this->projectWestActionPtr = projectWestActionPtr;
}


QAction* MasterActions::getProjectWestActionPtr()
{
    return projectWestActionPtr;
}


template<class X>
void MasterActions::connectToNewFileAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleNewFileActionSlot() ) );
}


template<class X>
void MasterActions::connectToNewTerminalAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleNewTerminalActionSlot() ) );
}


template<class X>
void MasterActions::connectToNewProjectAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleNewProjectActionSlot() ) );
}


template<class X>
void MasterActions::connectToOpenProjectAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleOpenProjectActionSlot() ) );
}


template<class X>
void MasterActions::connectToSaveAllAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleSaveAllActionSlot() ) );
}


template<class X>
void MasterActions::connectToUndoAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleUndoActionSlot() ) );
}


template<class X>
void MasterActions::connectToRedoAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleRedoActionSlot() ) );
}


template<class X>
void MasterActions::connectToSetProjectConfigAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleSetProjectConfigActionSlot() ) );
}


template<class X>
void MasterActions::connectToBuildAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleBuildActionSlot() ) );
}


template<class X>
void MasterActions::connectToCleanAndBuildAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleCleanAndBuildActionSlot() ) );
}


template<class X>
void MasterActions::connectToConfigForRunAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleConfigForRunActionSlot() ) );
}


template<class X>
void MasterActions::connectToRunAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleRunActionSlot() ) );
}


template<class X>
void MasterActions::connectToDebugAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleDebugActionSlot() ) );
}


template<class X>
void MasterActions::connectToGitAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleGitActionSlot() ) );
}


// South
template<class X>
void MasterActions::connectToOutputSouthAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleOutputSouthActionSlot() ) );
}


template<class X>
void MasterActions::connectToTerminalSouthAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleTerminalSouthActionSlot() ) );
}


// East
template<class X>
void MasterActions::connectToRunEastAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleRunEastActionSlot() ) );
}


template<class X>
void MasterActions::connectToNavEastAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleNavEastActionSlot() ) );
}


// West
template<class X>
void MasterActions::connectToProjectWestAction(X* component)
{
    connect(component, SIGNAL(released() ), this, SLOT(handleProjectWestActionSlot() ) );
}


QString* MasterActions::toString()
{
    QString* tmp = new QString();
    tmp->append("***method stub***");
    
    return tmp;
}


MasterActions::~MasterActions()
{
    ;
}