#include <stdio.h>
#include "map.h"
#include "player.h"

int main (/*int argc, char **argv*/)
{
  puts ("hello");

  map first_room =
  {
    "#####",
    "#   #",
    "##@ #",
    "#  ##",
    "#####"
  };

  player p = { 0, 0, 1.0, 0.0 };

  print_map (first_room);
  print_player (&p);
}

