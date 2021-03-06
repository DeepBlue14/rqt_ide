/* 
 * File:   FTPropertiesGui.h
 * Module: FileTree
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Properties GUI for configuring compiler and linker
 *                   options, etc.
 *
 * Created on July 24, 2015, 5:40 PM
 */

#ifndef FT_PROPERTIES_GUI_H
#define	FT_PROPERTIES_GUI_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QListWidget>
#include <QGridLayout>

class FTPropertiesGui : public QWidget
{
    Q_OBJECT
            
    private:
        QStringList* pagesStrLstPtr;
        QListWidget* pagesLwPtr;
        QGridLayout* outerLayout;
        
    private slots:
        ;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent class.
         */
        FTPropertiesGui(QWidget* parent = 0);
        
        /**
         * Destructor.
         */
        ~FTPropertiesGui();
};

#endif	/* FT_PROPERTIES_GUI_H */