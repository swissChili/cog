#ifndef PLAYER_H
#define PLAYER_H


/*
 * Player struct, contains position
 */
typedef struct
{
  unsigned int x;
  unsigned int y;
} player;

/*
 * Print debug info for player to stdout, not to be used
 * in production build
 */
#ifndef BUILD_PRODUCTION
void print_player ( player * );
#endif

/*
 * x and y are vectors of the camera orientation. Easier
 * than using radians or degrees.
 */
typedef struct
{
  double x;
  double y;
} camera;

#endif /* PLAYER_H */

