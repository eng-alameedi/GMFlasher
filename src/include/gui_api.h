#ifndef _GUI_API_H_
#define _GUI_API_H_

#include <ncurses.h>

void draw_progress_bar(WINDOW *win, int y, int x, int width, float progress);
void run_gui(WINDOW *win);

#endif  // _GUI_API_H_
