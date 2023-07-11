#include <stdio.h>
#include <ncurses.h>

#include "h/program_states.h"
#include "h/constants.h"


WINDOW *startScreen;

void
startMenu()
{
	startScreen = newwin(max_y/2, max_x/2, max_y/4, max_x/4);
	box(startScreen, 0, 0);
	refresh();

	mvwprintw(startScreen, 2, 4, "Welcome to the");

	wattron(startScreen, A_STANDOUT);
	mvwprintw(startScreen, 3, 4, "GNU Scribo IDE.");
	wattroff(startScreen, A_STANDOUT);

	mvwprintw(startScreen, 5, 4, "Documentation:");

	wrefresh(startScreen);
}
