#include <stdio.h>
#include "map.h"
#include "player.h"
#include "render.h"

#define VERSION "v0.0.1-devel"

int main (/*int argc, char **argv*/)
{
  puts ("cog " VERSION);

  map first_room =
  {
    "#####",
    "#   #",
    "##  #",
    "#  ##",
    "#####"
  };

  player p = { 1, 2, 1.0, 0.0 };

  render ( first_room, p );
}

