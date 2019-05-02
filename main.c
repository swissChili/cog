#include <stdio.h>
#include "map.h"
#include "player.h"
#include "render.h"

#define VERSION "v0.0.1-devel"

int main (/*int argc, char **argv*/)
{
  puts ("cog " VERSION);

  /*
   * Maps must fit the MAX definition in map.h, right now
   * this is just five because it's small enough to render
   * in the vim :make window. Later on maps will be broken
   * up into seperate buffers as to allow to theoretically
   * infinite map sizes. Fancy stuff like procedural world
   * generation might also be a thing thanks to blocks like
   * this.
   */
  map first_room =
  {
    "#####",
    "#   #",
    "##  #",
    "#  ##",
    "#####"
  };

  player p = { 1, 2 };

  render ( first_room, p );
}

