/* 
 * File:   AdvOptPage_2.h
 * Module: Configure
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class provides the "C/C++ Compiler" options for
 *                   AdvOptionsGui.
 *
 * Created on July 28, 2015, 7:05 PM
 * Last Modified: 
 */

#ifndef ADV_OPT_PAGE_2_H
#define	ADV_OPT_PAGE_2_H

#include <QWidget>
#include <QGridLayout>

#include <iostream>

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

class AdvOptPage_2 : public QWidget
{
    Q_OBJECT
      
    private:
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        AdvOptPage_2(QWidget* parent = 0);
        
        /**
         * Destructor.
         */
        ~AdvOptPage_2();
        
};

#endif	/* ADV_OPT_PAGE_2_H */