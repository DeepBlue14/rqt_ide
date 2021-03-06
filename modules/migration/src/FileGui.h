/* 
 * File:   File.h
 * Module: PrettySyntax
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class inherits from class QPlainTextEdit.  It
 *                   provides dynamic highlighting and auto-insertion of text
 *                   into the GUI representation of the file.
 * 
 * Created on May 2, 2015, 10:47 PM
 */

#ifndef FILE_H
#define	FILE_H

#include <QWidget>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QTextObject>
#include <QPainter>
#include <QCompleter>
#include <QTextCursor>
#include <QAbstractItemView>
#include <QScrollBar>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QSize>
#include <QPixmap>
#include <QMessageBox>

#include <iostream>

#include "RosEnv.h"
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

class FileGui : public QPlainTextEdit
{
    Q_OBJECT
    
    private:
        QWidget* lineNumberArea;
        //QWidget* codeFoldArea;
        QWidget* codeFoldArea;
        
        QCompleter* completerPtr;
        
        QString wordUnderCursor() const;
        
    private slots:
        /**
         * Inserts the completion of the word.
         * 
         * @param completion 
         */
        void insertCompletion(const QString& completion);
        
        /**
         * 
         * 
         * @param newBlockCount
         */
        void updateLineNumberAreaWidth(int newBlockCount);
        
        /**
         * 
         */
        void highlightCurrentLine();
        
        /**
         * 
         * 
         * @param 
         * @param 
         */
        void updateLineNumberArea(const QRect&, int);
        
    protected:
        /**
         * 
         * 
         * @param e
         */
        void keyPressEvent(QKeyEvent* e);
        
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        FileGui(QWidget* parent = 0);
        
        /**
         * 
         * 
         * @param c
         */
        void setCompleter(QCompleter* c);
        
        /**
         * 
         * 
         * @return 
         */
        QCompleter* completer() const;
        
        /**
         * Paints the line number on the left margin
         * 
         * @param event
         */
        void lineNumberAreaPaintEvent(QPaintEvent* event);
        
        /**
         * This method is similar to the previous one, except that it is for
         * the code folding instead of the line numbers.
         * 
         * @param event
         */
        void codeFoldingAreaPaintEvent(QPaintEvent* event);
        
        /**
         * 
         * 
         * @return 
         */
        int lineNumberAreaWidth();
        
        /**
         * 
         * 
         * @return 
         */
        int codeFoldingAreaWidth();
        
        /**
         * 
         * 
         * @param event
         */
        void resizeEvent(QResizeEvent* event);
        
        
        void closeEvent(QCloseEvent* event);
        
        
        void closeEvent(QCloseEvent* event, int tabIndex);
        
        /**
         * Classic toString method.
         * 
         * @return class data.
         */
        QString* toString();
        
        /**
         * Destructor.
         */
        ~FileGui();
        
};

#endif	/* FILE_H */