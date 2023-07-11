#ifndef GAME_MAN_H
#define GAME_MAN_H

#include <stdio.h>
#include <ncurses.h>


/* this is the 'program manager' named ProMan in honor of my favorite package manager (shout out to you if you know what it is), with two variables  */

typedef struct {
	void (*current_state) ();  /* void function pointer which acts a sort of slot machine, minus the randomness, where functions can be swapped in and out and then executed  */
	int somevar;               /* test variable */
} ProMan;

#endif
