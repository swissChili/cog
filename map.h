#ifndef MAP_H
#define MAP_H

#include <stdio.h>

#define MAX 5

#define EMPTY_ROOM() { { ' ' } }

/**
 * The map type is a map. It can be written to a file for saving,
 * randomly generated, and other fancy things done with it. This
 * is C so there's no point in even making it a struct as a simple
 * typedef will do just fine.
 */
typedef char map[MAX][MAX];


void new_map_empty ( map );
/*
 * Print map to stdout without ncurses window. Also just for
 * debug builds
 */
#ifndef BUILD_PRODUCTION
void print_map ( map );
#endif

#endif /* MAP_H */

