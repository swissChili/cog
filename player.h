#ifndef PLAYER_H
#define PLAYER_H

typedef struct
{
  unsigned int x;
  unsigned int y;
  double dir_x;
  double dir_y;
} player;

void print_player ( player * );


typedef struct
{
  double x;
  double y;
} camera;

#endif /* PLAYER_H */

