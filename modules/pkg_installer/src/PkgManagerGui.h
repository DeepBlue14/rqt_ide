/* 
 * File:   PkgManagerGui.h
 * Module: pkg_installer
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class contains the UI which holds the installer data,
 *                   including the tabs (see PkgManagerTabs.h).
 *
 * Created on August 27, 2015, 10:36 AM
 * Last Modified: 1/16/2016
 */

#ifndef PKG_MANAGER_GUI_H
#define	PKG_MANAGER_GUI_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QLineEdit>
#include <QTabWidget>
#include <QComboBox>
#include <QListWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

#include "PkgManagerTabs.h"

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;


class PkgManagerGui : public QWidget
{
    Q_OBJECT

public:
    /**
     * Constructor;
     * 
     * @param parent Pointer to parent object type.
     */
    explicit PkgManagerGui(QWidget* parent = 0);
    
    /**
     * Classic toString-style method.
     * 
     * @return 
     */
    QString* toString();
    
    /**
     * Destructor;
     */
    virtual ~PkgManagerGui();

    
private slots:
    void handleDistroChangeSlot(int newIndex);

    
private:
    QTabWidget* tabWidgetPtr;
    QLineEdit* searchLePtr;
    QStringList* rosVersionsStrLstPtr;
    QComboBox* rosVersionCbPtr;
    QPushButton* installBtnPtr;
    QPushButton* exitBtnPtr;
    QPushButton* helpBtnPtr;
    QHBoxLayout* rightHLayout;
    QHBoxLayout* btnLayout;
    QGridLayout* outerLayout;

    PkgManagerTabs* installedTab;
    PkgManagerTabs* availableTab;
        
};


#endif	/* PKG_MANAGER_GUI_H */