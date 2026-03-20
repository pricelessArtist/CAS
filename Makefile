run: 
	mkdir -p build/
	g++ main.cpp utils/DoublyLinkedList.cpp utils/Algorithms/Abacus.cpp -o build/Main 
	./build/Main