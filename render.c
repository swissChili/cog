#include "render.h"
#include "map.h"
#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>

void render_p ( player p )
{
  mvaddch (p.x, p.y, '@');
}

void render ( map m, player p )
{
  initscr ();
  noecho ();
  curs_set (FALSE);

  addch (p.x);

  for ( int i = 0; i < MAX; ++i )
  {
    for ( int j = 0; j < MAX; ++j )
    {
      mvaddch (i, j, m[i][j]);
    }
  }

  render_p (p);

  refresh ();

  sleep (3);

  endwin ();
}

