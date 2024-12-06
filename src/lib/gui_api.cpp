#include "gui_api.h"

#include <ncurses.h>
#include <unistd.h>

void draw_progress_bar(WINDOW *win, int y, int x, int width, float progress) {
  int filled = static_cast<int>(width * progress);
  mvwprintw(win, y, x, "[");
  for (int i = 0; i < width; ++i) {
    if (i < filled) {
      waddch(win, '#');
    } else {
      waddch(win, ' ');
    }
  }
  wprintw(win, "]");
}

void run_gui(WINDOW *win) {
  // Progress bar loop
  for (int i = 0; i <= 100; ++i) {
    werase(win);
    box(win, 0, 0);
    mvwprintw(win, getmaxy(win) - 4, 2, "Progress: %d%%", i);
    draw_progress_bar(win, getmaxy(win) - 3, 1, getmaxx(win) - 4, i / 100.0f);
    wrefresh(win);
    usleep(100000);  // 100ms delay
  }

  mvwprintw(win, getmaxy(win) - 2, 2, "Press any key to exit.");
  wrefresh(win);
  getch();
}
