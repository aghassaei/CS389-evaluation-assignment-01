CXX=gcc
CXXFLAGS= -std=c11 -Wall -Wextra -Wpedantic -Werror -O0 -g
LDFLAGS=$(CXXFLAGS)
OBJ=$(SRC:.c=.o)

all:	update_locations

makeit:	update_locations.o
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.c %.h
	$(CXX) $(CXXFLAGS) $(OPTFLAGS) -c -o $@ $<

clean:
	rm -rf *.o update_locations