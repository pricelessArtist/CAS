#include <iostream>
#include "Abacus.hpp"
using namespace std;

Result Abacus::Addition(DoubleLinkedList list1, DoubleLinkedList list2, char number1, char number2) {
    Result result;
    Node* list1Head;
    Node* list2Head;
    
    //we need to check if one char is less than the other
    // if number1 is less than number2, the leftPointer is decreasing, rightPointer is increasing.
    // else number2 is less than number1, the rightPointer is decreasing, leftPointer is increasing. 
    if (number1 < number2) {
        cout << "Number " << number1 << " is less than number " << number2; 
        // since number 1 is less than number 2, we can easily loop through the leftPointer to go back, starting with list1.
    } else {
        cout << "Number " << number2 << " is less than number " << number1;  
    }
}