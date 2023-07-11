#ifndef MENU_OPTION_H
#define MENU_OPTION_H

#include <stdio.h>
#include <ncurses.h>


/* generic menu option structure, both for bars and verticals, with a name char array and a keybind character, which is listened for in another method */

typedef struct
{
	const char name[];
	const char keybind;
} MenuOption;

#endif
