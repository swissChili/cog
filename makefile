SOURCES = main.c
SOURCES += map.c
SOURCES += player.c
SOURCES += render.c

HEADERS = map.h
HEADERS += player.h
HEADER += render.h

CFLAGS = -l ncurses

dist/cog: $(SOURCES) $(HEADERS)
	mkdir -p dist
	gcc -o $@ $(SOURCES) $(CFLAGS)
	$@

