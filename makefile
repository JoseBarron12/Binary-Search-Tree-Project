CXXFLAGS += -std=c++11 -Wall -Wextra -Werror -pedantic -I.


all: bst


main: bst.cc bst.h binarysearchtree.h btree.h node.h
	g++ $(CXXFLAGS) -o bst bst.cc 

clean:
	rm -f bst

.PHONY: all clean
