all : src/player src/dealer src/MainWindow 

CXXFLAGS+= -Wall -O0 -g -std=c++11
CPPFLAGS+= -I./include -I.`/usr/bin/pkg-config gtkmm-3.0  --cflags --libs`
LDLIBS+= `/usr/bin/pkg-config gtkmm-3.0  --cflags --libs`


clean:
        -rm -f src/player
        -rm -f src/dealer
        -rm -f src/MainWindow
        -rm -f src/main

#LDLIBS+= `/usr/bin/pkg-config gtk+-3.0 --cflags --libs`
#LDLIBS = $(shell pkg-config --cflags --libs gtk+-3.0)
