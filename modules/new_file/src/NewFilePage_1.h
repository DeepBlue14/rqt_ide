/* 
 * File:   NewFilePage_1.h
 * Module: NewFile
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 15, 2015, 9:24 AM
 */

#ifndef NEW_FILE_PAGE_1_H
#define	NEW_FILE_PAGE_1_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QStringList>
#include <QStringListModel>
#include <QVector>
#include <QListWidget>
#include <QTextEdit>
#include <QGridLayout>

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

using std::cout;
using std::cerr;
using std::endl;

class NewFilePage_1 : public QWidget
{
    Q_OBJECT

public:
    /**
     * 
     * 
     * @param parent
     */
    explicit NewFilePage_1(QWidget* parent = 0);

    /**
     * 
     */
    void setLangStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getLangStrPtr();

    /**
     * 
     */
    void setFileTypeStrPtr();

    /**
     * 
     * 
     * @return 
     */
    QString* getFileTypeStrPtr();

    /**
     * 
     */
    void triggerMutators();

    /**
     * 
     * 
     * @return 
     */
    QString* toString();

    /**
     * Destructor.
     */
    virtual ~NewFilePage_1();
    
    
private slots:
    /**
     * 
     */
    void handleSwapOptionsSlot();
    
    
private:
    QLabel* titlePtr;
    //QStringList* langsStrLstPtr;
    QVector<QListWidgetItem*>* langsStrLstPtr;
    QVector<QListWidgetItem*>* cFileOptLstWidPtrVecPtr;
    QVector<QListWidgetItem*>* cppFileOptLstWidPtrVecPtr;
    QVector<QListWidgetItem*>* pythonFileOptLstWidPtrVecPtr;
    QVector<QListWidgetItem*>* javaFileOptLstWidPtrVecPtr;
    QVector<QListWidgetItem*>* lispFileOptLstWidPtrVecPtr;
    QVector<QListWidgetItem*>* shellFileOptLstWidPtrVecPtr;
    QVector<QListWidgetItem*>* otherFileOptLstWidPtrVecPtr;
    QVector<QVector<QListWidgetItem*>*>* fileTypeStrLstPtrVec;
    QListWidget* langsLwPtr;
    QListWidget* fileTypeLwPtr;

    QGridLayout* outerLayoutPtr;

    QString* langStrPtr;
    QString* fileTypeStrPtr;
};

#endif	/* NEW_FILE_PAGE_1_H */
