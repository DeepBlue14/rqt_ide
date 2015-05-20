/* 
 * File:   MasterTabs.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file creates the tab widget that will be contained
 *                   within the central gui.
 * Reference: http://codeprogress.com/cpp/libraries/qt/QTabWidgetClosableTabs.php#.VUQ7AXXd_CI
 * 
 * Created on May 1, 2015, 12:38 AM
 */

#ifndef TAB_GUI_H
#define	TAB_GUI_H

#include <QWidget>
#include <QTabWidget>
#include <QMenu>
#include <QGridLayout>

#include "OpeningGui.h"

#include <iostream>

using namespace std;

class TabGui : public QWidget
{
    Q_OBJECT
    
    private:
        QTabWidget* tabWidget;
        
        QGridLayout* outerLayout;
        
        OpeningGui* openingGui;
    private slots:
        ;
    
    public:
        TabGui(QWidget* parent = 0);
        template<class TabType>
        void addTab(TabType* tabType);
        QTabWidget* getTabWidget();
        ~TabGui();
            
};

#endif	/* TAB_GUI_H */