/* 
 * File:   ReconfigPage_6.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This "page" displays the custom package.xml files
 *                   generated for the new ROS project (one at a time).
 *                   The modified parts will be highlighted for convenience.
 *                   Some additional data (i.e. the location of the file, etc.)
 *                   is also listed.
 * 
 * 
 * Created on October 4, 2015, 7:26 PM
 * Last Modified: 
 */

#include <QWidget>
#include <QString>
#include <QTextEdit>
#include <QGridLayout>

#include <iostream>


using namespace std;

#ifndef RECONFIG_PAGE_6_H
#define	RECONFIG_PAGE_6_H

class ReconfigPage_6 : public QWidget
{
    Q_OBJECT
            
    private:
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        ReconfigPage_6(QWidget* parent = 0);
        QString* toString();
        ~ReconfigPage_6();
};

#endif	/* RECONFIGPAGE_6_H */