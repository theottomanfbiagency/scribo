#ifndef MENU_VERTICAL_H
#define MENU_VERTICAL_H

#include <stdio.h>
#include <ncurses.h>

#include "menu_option.h"

typedef struct {
	MenuOption options[];
	int x;
	int y;
} VerticalMenu;

void MenuDraw(VerticalMenu menu_to_draw);

#endif
