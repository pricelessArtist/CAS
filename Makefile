CFLAGS = -g -Wall -Wextra
UTILS = utils/DoublyLinkedList.cpp utils/Algorithms/Abacus.cpp 

run: 
	mkdir -p build/
	g++ ${CFLAGS} main.cpp ${UTILS} -o build/Main 
	./build/Main