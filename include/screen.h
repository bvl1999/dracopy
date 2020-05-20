/*
 * screen.h
 *
 *  Created on: 10.01.2009
 *      Author: bader
 *
 * DraCopy (dc*) is a simple copy program.
 * DraBrowse (db*) is a simple file browser.
 *
 * Since both programs make use of kernal routines they shall
 * be able to work with most file oriented IEC devices.
 *
 * Created 2009 by Sascha Bader
 *
 * The code can be used freely as long as you retain
 * a notice describing original source and author.
 *
 * THE PROGRAMS ARE DISTRIBUTED IN THE HOPE THAT THEY WILL BE USEFUL,
 * BUT WITHOUT ANY WARRANTY. USE THEM AT YOUR OWN RISK!
 *
 * Newer versions might be available here: http://www.sascha-bader.de/html/code.html
 *
 */
#ifndef SCREEN_H
#define SCREEN_H
void clearArea( int xpos, int ypos, int xsize, int ysize);
void newscreen(char * title);
void drawFrame( char * title, int xpos, int ypos, int xsize, int ysize);
void initScreen( unsigned char border, unsigned char bg, unsigned char text);
void exitScreen(void);
#endif
