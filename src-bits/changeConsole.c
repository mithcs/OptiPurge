#include "curses.h"

int main() {
    initscr();          // Initialize curses
    start_color();      // Enable color support (optional)

    // Create a window
    WINDOW *my_window;
    my_window = newwin(10, 30, 5, 5);  // (height, width, starty, startx)

    // Print a message in the window
    wprintw(my_window, "Hello, PDCurses!");
    wrefresh(my_window);

    // Wait for a key press
    getch();

    // Clean up and close curses
    endwin();

    return 0;
}
