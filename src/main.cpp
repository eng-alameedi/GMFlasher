#include <ncurses.h>

#include "gui_api.h"

int main() {
  // Initialize ncurses
  initscr();
  cbreak();
  noecho();
  curs_set(0);  // Hide the cursor

  int height, width;
  getmaxyx(stdscr, height, width);  // Get terminal size

  WINDOW *win = newwin(height, width, 0, 0);
  box(win, 0, 0);  // Create a box around the window
  refresh();

  // Example GUI functionality
  run_gui(win);

  // Cleanup
  endwin();
  return 0;
}
