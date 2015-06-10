/* 
 * File:   EnvCmds.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 * 
 * 
 *
 * Created on May 17, 2015, 9:51 PM
 */

#ifndef RIDE_ENV_H
#define	RIDE_ENV_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QDir>
#include <QVector>
#include <QProcess>

#include <iostream>

using namespace std;

class RideEnv
{ 
    private:
        /**
         * Absolute path to the ROS catkin workspace being used.
         */
        QString* catkinWsAbsPathStrPtr;
        
        /**
         * Absolute paths to the "root" directory of each node. 
         */
        QStringList* nodeAbsPathStrLstPtr;
        
        /**
         * Absolute path to the .ridePorject directory of each node.
         */
        QString* rideProjDirAbsPathStrPtr;
    
    public:
        RideEnv();
        void setCatkinWsAbsPathStrPtr(QString* catkinWsAbsPathStrPtr);
        QString* getCatkinWsAbsPathStrPtr();
        void pushToNodeAbsPathStrLstPtr(QString* nodeAbsPathStr);
        QString* popFromNodeAbsPathStrLstPtr();
        QStringList* getNodeAbsPathStrLstPtr();
        void setRideProjDirAbsPathStrPtr(QString* rideProjDirAbsPathStrPtr);
        QString* getRideProjDirAbsPathStrPtr();
        QString* toString();
        ~RideEnv();
};

#endif	/* RIDE_ENV_H */