SOURCES = main.c
SOURCES += map.c
SOURCES += player.c

HEADERS = map.h
HEADERS += player.h

dist/cog: $(SOURCES) $(HEADERS)
	mkdir -p dist
	gcc -o $@ $(SOURCES) $(CFLAGS)
	$@

