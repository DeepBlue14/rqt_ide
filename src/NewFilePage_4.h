/* 
 * File:   NewFilePage_4.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: 
 *
 * Created on August 14, 2015, 1:34 PM
 */

#ifndef NEW_FILE_PAGE_4_H
#define	NEW_FILE_PAGE_4_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QListWidget>
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

class NewFilePage_4 : public QWidget
{
    Q_OBJECT
            
    private:
        QStringList* cHeaderTemplateStrLst;
        QStringList* cSourceTemplateStrLst;
        QStringList* cppHeaderTemplateStrLst;
        QStringList* cppSourceTemplateStrLst;
        QStringList* pySourceTemplateStrLst;
        QStringList* jSourceTemplateStrLst;
        QStringList* lispSourceTemplateStdrLst;
        
        QListWidget* templatesLstWidPtr;
        QGridLayout* outerLayout;
        
        QString* selectedTemplateStrPtr;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent pointer to object of parent type.
         */
        NewFilePage_4(QWidget* parent = 0);
        
        /**
         * 
         */
        void triggerMutators();
        
        /**
         * 
         * 
         * @param selectedTemplateStrPtr
         */
        void setSelectedTemplateStrPtr(QString* selectedTemplateStrPtr);
        
        /**
         * 
         * 
         * @return 
         */
        QString* getSelectedTemplateStrPtr();
        
        /**
         * 
         * 
         * @return 
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~NewFilePage_4();
};

#endif	/* NEW_FILE_PAGE_4_H */