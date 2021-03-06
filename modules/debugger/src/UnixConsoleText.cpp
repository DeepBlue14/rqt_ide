#include "UnixConsoleText.h"


string UnixConsoleText::red(string textStrPtr)
{
        //cout << "\033[1;31mbold red text\033[0m\n");
    return string("\033[0;31m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::green(string textStrPtr)
{
    return string("\033[0;32m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::yellow(string textStrPtr)
{
    return string("\033[0;33m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::blue(string textStrPtr)
{
    return string("\033[0;34m" + textStrPtr + "\033[0m");    
}


string UnixConsoleText::purple(string textStrPtr)
{
    return string("\033[0;35m" + textStrPtr + "\033[0m");    
}


string UnixConsoleText::cyan(string textStrPtr)
{
    return string("\033[0;36m" + textStrPtr + "\033[0m");    
}


string UnixConsoleText::gray(string textStrPtr)
{
    return string("\033[0;37m" + textStrPtr + "\033[0m"); 
}






string UnixConsoleText::bold(string textStrPtr)
{
    return string("\033[1;30m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::boldRed(string textStrPtr)
{
    return string("\033[1;31m" + textStrPtr + "\033[0m");    
}


string UnixConsoleText::boldGreen(string textStrPtr)
{
    return string("\033[1;32m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::boldYellow(string textStrPtr)
{
    return string("\033[1;33m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::boldBlue(string textStrPtr)
{
    return string("\033[1;34m" + textStrPtr + "\033[0m");  
}


string UnixConsoleText::boldPurple(string textStrPtr)
{
    return string("\033[1;35m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::boldCyan(string textStrPtr)
{
    return string("\033[1;36m" + textStrPtr + "\033[0m");  
}


string UnixConsoleText::boldGray(string textStrPtr)
{
    return string("\033[1;37m" + textStrPtr + "\033[0m"); 
}





string UnixConsoleText::italic(string textStrPtr)
{
    return string("\033[3;30m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::italicRed(string textStrPtr)
{
    return string("\033[3;31m" + textStrPtr + "\033[0m");    
}


string UnixConsoleText::italicGreen(string textStrPtr)
{
    return string("\033[3;32m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::italicYellow(string textStrPtr)
{
    return string("\033[3;33m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::italicBlue(string textStrPtr)
{
    return string("\033[3;34m" + textStrPtr + "\033[0m");    
}


string UnixConsoleText::italicPurple(string textStrPtr)
{
    return string("\033[3;35m" + textStrPtr + "\033[0m"); 
}


string UnixConsoleText::italicCyan(string textStrPtr)
{
    return string("\033[3;36m" + textStrPtr + "\033[0m"); 
}


string UnixConsoleText::italicGray(string textStrPtr)
{
    return string("\033[3;37m" + textStrPtr + "\033[0m"); 
}





string UnixConsoleText::underlined(string textStrPtr)
{
    return string("\033[4;30m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::underlinedRed(string textStrPtr)
{
    return string("\033[4;31m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::underlinedGreen(string textStrPtr)
{
    return string("\033[4;32m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::underlinedYellow(string textStrPtr)
{
    return string("\033[4;33m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::underlinedBlue(string textStrPtr)
{
    return string("\033[4;34m" + textStrPtr + "\033[0m");    
}


string UnixConsoleText::underlinedPurple(string textStrPtr)
{
    return string("\033[4;35m" + textStrPtr + "\033[0m"); 
}


string UnixConsoleText::underlinedCyan(string textStrPtr)
{
    return string("\033[4;36m" + textStrPtr + "\033[0m"); 
}


string UnixConsoleText::underlinedGray(string textStrPtr)
{
    return string("\033[4;37m" + textStrPtr + "\033[0m"); 
}





string UnixConsoleText::strikethrough(string textStrPtr)
{
    return string("\033[9;30m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::strikethroughRed(string textStrPtr)
{
    return string("\033[9;31m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::strikethroughGreen(string textStrPtr)
{
    return string("\033[9;32m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::strikethroughYellow(string textStrPtr)
{
    return string("\033[9;33m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::strikethroughBlue(string textStrPtr)
{
    return string("\033[9;34m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::strikethroughPurple(string textStrPtr)
{
    return string("\033[9;35m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::strikethroughCyan(string textStrPtr)
{
    return string("\033[9;36m" + textStrPtr + "\033[0m");
}


string UnixConsoleText::strikethroughGray(string textStrPtr)
{
    return string("\033[9;37m" + textStrPtr + "\033[0m");
}