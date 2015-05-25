/* 
 * File:   ExecutionGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 21, 2015, 7:37 PM
 */

#ifndef RUN_GUI_H
#define	RUN_GUI_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

#include "RunPage_1.h"
#include "RunPage_2.h"
#include "RunPage_3.h"

using namespace std;

class RunGui : public QWidget
{
    Q_OBJECT
            
    private:
        enum Page
        {
            PAGE_ONE,
            PAGE_TWO,
            PAGE_THREE
        };
        
        Page currentPage;
        
        QPushButton* backBtn;
        QPushButton* nextBtn;
        QPushButton* finishBtn;
        QPushButton* helpBtn;
        QPushButton* cancelBtn;
        
        QGridLayout* outerLayoutPtr;
        QHBoxLayout* buttonLayout;
        
        RunPage_1* runPage_1Ptr;
        RunPage_2* runPage_2Ptr;
        RunPage_3* runPage_3Ptr;
        
    private slots:
        void handleBackBtnSlot();
        void handleNextBtnSlot();
        void handleFinishBtnSlot();
        void handleHelpBntSlot();
        void handleCancelBtnSlot();        
       
    public:
        RunGui(QWidget* parent = 0);
        void initBtns();
        void reset();
        void swapNextPage();
        void swapBackPage();
        void loadPage_1();
        void unloadPage_1();
        void loadPage_2();
        void unloadPage_2();
        void loadPage_3();
        void unloadPage_3();
        
        QString* toString();    
        ~RunGui();
};

#endif	/* RUN_GUI_H */
