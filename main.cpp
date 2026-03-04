#include <iostream>
#include "DoublyLinkedList.hpp"
using namespace std;

int main() {
    DoubleLinkedList list;

    list.insertNode('0');
    list.insertNode('1');
    list.insertNodeAfter('2', '1');
    list.insertNodeAfter('3', '2');
    list.insertNodeAfter('4', '3');
    list.insertNodeAfter('5', '4');
    list.insertNodeAfter('6', '5');
    list.insertNodeAfter('7', '6');
    list.insertNodeAfter('8', '7');
    list.insertNodeAfter('9', '8');
    list.iterateForward();
    list.iterateBackwards();
    return 0;
}