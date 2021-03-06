/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EditorAutoMemTab.h
 * Module: options
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This is a tab which allows the user to view and edit
 *                   the IDEs auto save and auto backup policies.
 *
 * Created on February 7, 2016, 3:35 PM
 * Last Modified: 2/09/2016
 */

#ifndef EDITOR_AUTO_MEM_TAB_H
#define EDITOR_AUTO_MEM_TAB_H


#include "OptionTabInterface.h"

class EditorAutoMemTab : public OptionTabInterface
{

public:
    explicit EditorAutoMemTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~EditorAutoMemTab();
    
private:
    ;
};

#endif /* EDITOR_AUTO_MEM_TAB_H */