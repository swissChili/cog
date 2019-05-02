#ifndef RENDER_H
#define RENDER_H

#include "map.h"
#include "player.h"

/*
 * Helper function to initialize ncurses window, and render
 * map and player to screen. So far just renders in 2d, later
 * will implement rendering for functions in raycast.h and
 * physics.h
 */
void render ( map, player );

#endif /* RENDER_H */

