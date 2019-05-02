#include "render.h"
#include <ncurses.h>
#include <unistd.h>

void render ( void )
{
  initscr ();
  noecho ();
  curs_set (FALSE);

  sleep (1);

  endwin ();
}

