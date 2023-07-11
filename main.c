#include <stdio.h>
#include <ncurses.h>

#include "h/state_man.h"
#include "h/program_states.h"
#include "h/constants.h"

/* define variables and structs and whatever */

ProMan programManager;

int
main(void)
{
	initscr();                                  /* initialize the stdscr, which is a special 'window' in ncurses that is the resolution of the entire open terminal window */
	noecho();                                   /* make it so input is not immediately printed to the screen  */
	curs_set(0);                                /* set the blinking cursor usually visible onscreen to be invisible */

	getmaxyx(stdscr, max_y, max_x);             /* initialize the max_x and max_y constants */ 

	programManager.current_state = &startMenu;  /* set the program manager's 'current state' pointer to the menu function defined in program_states.h */
	programManager.current_state();             /* run the current mode set in the 'current state' pointer */

	getch();                                    /* pause until the user presses a key, then exit the program and end curses mode with endwin() */

	endwin();                                   /* end the window, and end curses mode */


	return 0;                                   /* mission accomplished */
}
