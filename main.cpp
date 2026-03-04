#include <iostream>
#include "DoublyLinkedList.hpp"
using namespace std;

int main() {
    DoubleLinkedList list;

    list.insertNode('0');
    list.insertNode('1');
    list.insertNodeAfter('2', '1');
    list.insertNodeAfter('3', '2');
    list.iterateForward();
    list.iterateBackwards();
    return 0;
}