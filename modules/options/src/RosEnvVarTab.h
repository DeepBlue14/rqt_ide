/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RosEnvVarTab.h
 * Module: 
 * Author: james
 * Email: 
 * File Description: 
 *
 * Created on February 9, 2016, 12:47 AM
 * Last Modified: 
 */

#ifndef ROS_ENV_VAR_TAB_H
#define ROS_ENV_VAR_TAB_H


#include "OptionTabInterface.h"

class RosEnvVarTab : public OptionTabInterface
{
    
public:
    explicit RosEnvVarTab(OptionTabInterface* parent = 0);
    void setup();
    void setTabTitleStrPtr(QString* tabTitleStrPtr);
    QString* getTabTitleStrPtr();
    virtual ~RosEnvVarTab();

    
private:
    ;
};

#endif /* ROS_ENV_VAR_TAB_H */