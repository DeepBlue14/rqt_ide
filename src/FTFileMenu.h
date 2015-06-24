/* 
 * File:   FileTreeMenu.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Menu (opened on right click) for files listed in the
 *                   tree view.
 *
 * Created on June 24, 2015, 1:17 PM
 */

#ifndef FT_File_MENU_H
#define	FT_File_MENU_H

#include <QMenu>

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

class FTFileMenu : public QMenu
{
    private:
        ;
        
    private slots:
        void handleOpenMenuSlot();
        
    public:
        FTFileMenu();
        void initMenu();
        ~FTFileMenu();
};

#endif	/* FT_File_MENU_H */