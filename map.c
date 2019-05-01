#include "map.h"

void new_map_empty ( map foo )
{
  for ( int i = 0 ; i < MAX; ++i )
  {
    for ( int j = 0; j < MAX; ++j )
    {
      foo[i][j] = ' ';
    }
  }
}

void print_map ( map foo )
{
  for ( int i = 0; i < MAX; ++i )
  {
    for ( int j = 0; j < MAX; ++j )
    {
      printf("%c", foo[i][j]);
    }
    printf("\n");
  }
}

