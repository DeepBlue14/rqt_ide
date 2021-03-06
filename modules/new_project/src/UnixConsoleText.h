/* 
 * File:   ConsoleColors.h
 * Module: Unaffiliated
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: Console color for UNIX-type systems.
 *
 * Reference: http://www.linuxhowtos.org/Tips%20and%20Tricks/ansi_escape_sequences.htm
 *            http://www.cplusplus.com/forum/unices/36461/
 * 
 * Created on December 11, 2014, 1:14 PM
 */

#ifndef UNIX_CONSOLE_TEXT_H
#define	UNIX_CONSOLE_TEXT_H

#include <string>

using std::string;

namespace UnixConsoleText
{
    /**
     * Method to return red textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed red.
     * @return Red textStrPtr.
     */
    string red(string textStrPtr); //overload/template so it can take any param
    
    /**
     * Method to return green textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed green.
     * @return Green textStrPtr.
     */
    string green(string textStrPtr);
    
    /**
     * Method to return yellow textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed yellow.
     * @return Yellow textStrPtr.
     */
    string yellow(string textStrPtr);
    
    /**
     * Method to return blue textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed blue.
     * @return Blue textStrPtr.
     */
    string blue(string textStrPtr);
    
    /**
     * Method to return purple textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed purple.
     * @return Purple textStrPtr.
     */
    string purple(string textStrPtr);
    
    /**
     * Method to return cyan textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed cyan.
     * @return Cyan textStrPtr.
     */
    string cyan(string textStrPtr);
    
    /**
     * Method to return gray textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed gray.
     * @return Gray textStrPtr.
     */
    string gray(string textStrPtr);
    
    
    
    
    /**
     * Method to return bold black textStrPtr
     * @param textStrPtr
     * @return Bold black text.
     */
    string bold(string textStrPtr);
    
    /**
     * Method to return bold red textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed bold red.
     * @return Bold red textStrPtr.
     */
    string boldRed(string textStrPtr); //overload/template so it can take any param
    
    /**
     * Method to return bold green textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed bold green.
     * @return Bold green textStrPtr.
     */
    string boldGreen(string textStrPtr);
    
    /**
     * Method to return bold yellow textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed bold yellow.
     * @return Bold yellow textStrPtr.
     */
    string boldYellow(string textStrPtr);
    
    /**
     * Method to return bold blue textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed bold blue.
     * @return Bold blue textStrPtr.
     */
    string boldBlue(string textStrPtr);
    
    /**
     * Method to return bold purple textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed bold purple.
     * @return Bold purple textStrPtr.
     */
    string boldPurple(string textStrPtr);
    
    /**
     * Method to return bold cyan textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed bold cyan.
     * @return Bold cyan textStrPtr.
     */
    string boldCyan(string textStrPtr);
    
    /**
     * Method to return bold gray textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed bold gray.
     * @return Bold gray textStrPtr.
     */
    string boldGray(string textStrPtr);
    
    
    
    
    /**
     * 
     * @param textStrPtr
     * @return 
     */
    string italic(string textStrPtr);
    
    /**
     * Method to return italic red textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed italic red.
     * @return Italic red textStrPtr.
     */
    string italicRed(string textStrPtr);
    
    /**
     * Method to return italic green textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed italic green.
     * @return Italic green textStrPtr.
     */
    string italicGreen(string textStrPtr);
    
    /**
     * Method to return italic yellow textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed italic yellow.
     * @return Italic yellow textStrPtr.
     */
    string italicYellow(string textStrPtr);
    
    /**
     * Method to return italic blue textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed italic blue.
     * @return Italic blue textStrPtr.
     */
    string italicBlue(string textStrPtr);
    
    /**
     * Method to return italic purple textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed italic purple.
     * @return Italic purple textStrPtr.
     */
    string italicPurple(string textStrPtr);
    
    /**
     * Method to return italic cyan textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed italic cyan.
     * @return Italic cyan textStrPtr.
     */
    string italicCyan(string textStrPtr);
    
    /**
     * Method to return italic gray textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed italic gray.
     * @return Italic gray textStrPtr.
     */
    string italicGray(string textStrPtr);
    
    
    
    
    /**
     * 
     * @param textStrPtr
     * @return 
     */
    string underlined(string textStrPtr);
    /**
     * Method to return underlined red textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed underlined red.
     * @return Underlined red textStrPtr.
     */
    string underlinedRed(string textStrPtr);
    
    /**
     * Method to return underlined green textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed underlined green.
     * @return Underlined green textStrPtr.
     */
    string underlinedGreen(string textStrPtr);
    
    /**
     * Method to return underlined yellow textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed underlined yellow.
     * @return Underlined yellow textStrPtr.
     */
    string underlinedYellow(string textStrPtr);
    
    /**
     * Method to return underlined blue textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed underlined blue.
     * @return Underlined blue textStrPtr.
     */
    string underlinedBlue(string textStrPtr);
    
    /**
     * Method to return underlined purple textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed underlined purple.
     * @return Underlined purple textStrPtr.
     */
    string underlinedPurple(string textStrPtr);
    
    /**
     * Method to return underlined cyan textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed underlined cyan.
     * @return Underlined cyan textStrPtr.
     */
    string underlinedCyan(string textStrPtr);
    
    /**
     * Method to return underlined gray textStrPtr.
     * 
     * @param textStrPtr textStrPtr to be printed underlined gray.
     * @return Underlined gray textStrPtr.
     */
    string underlinedGray(string textStrPtr);
    
    
    
    
    /**
     * 
     * @param textStrPtr
     * @return 
     */
    string strikethrough(string textStrPtr);
    
    /**
     * 
     * @param textStrPtr
     * @return 
     */
    string strikethroughRed(string textStrPtr);
    
    /**
     * 
     * @param textStrPtr
     * @return 
     */
    string strikethroughGreen(string textStrPtr);
    
    /**
     * 
     * @param textStrPtr
     * @return 
     */
    string strikethroughYellow(string textStrPtr);
    
    /**
     * 
     * @param textStrPtr
     * @return 
     */
    string strikethroughBlue(string textStrPtr);
    
    /**
     * 
     * @param textStrPtr
     * @return 
     */
    string strikethroughPurple(string textStrPtr);
    
    /**
     * 
     * @param textStrPtr
     * @return 
     */
    string strikethroughCyan(string textStrPtr);
    
    /**
     * 
     * @param textStrPtr
     * @return 
     */
    string strikethroughGray(string textStrPtr);
    
    //string blueBackground(string textStrPtr);
    
};

#endif	/* UNIX_CONSOLE_TEXT_H */