#include <iostream>
#include "Abacus.hpp"
using namespace std;

Result Abacus::Addition(DoubleLinkedList list1, DoubleLinkedList list2, char number1, char number2) {
    Result result;
    Node* list1CurrentNode = nullptr;
    Node* list2CurrentNode = nullptr;

    //we need to check if one char is less than the other
    // if number1 is less than number2, the leftPointer is decreasing, rightPointer is increasing.
    // else number2 is less than number1, the rightPointer is decreasing, leftPointer is increasing. 
    if (number1 < number2) {
        cout << "Number " << number1 << " is less than number " << number2 << endl; 
       //list1 goes backwards 
       //while list2 goes forward
        list1CurrentNode = list1.lastNode;
        list2CurrentNode = list2.firstNode;

        //assigns left and right pointer
        while (list1CurrentNode != nullptr && list2CurrentNode != nullptr) {
            if (list1CurrentNode->element == number1) {
                leftPointer = list1CurrentNode;
            } 
            list1CurrentNode = list1CurrentNode->previousNode;

            if (list2CurrentNode->element == number2) {
                rightPointer = list2CurrentNode;
            }
            list2CurrentNode = list2CurrentNode->nextNode;
        }

        //loops backwards
        while (leftPointer) {
            cout << leftPointer->element << endl;
            cout << rightPointer->element << endl;

            //we need to check for a carry on the rightPointer
            if (rightPointer == list2.lastNode) {
                rightPointer = list2.firstNode;
                result.isCarry = true;
            } else {
                result.isCarry = false;
            }

            if (leftPointer == list1.firstNode) {
                break;
            }
            
            rightPointer = rightPointer->nextNode;
            leftPointer = leftPointer->previousNode;
        }
       
        result.digit = rightPointer;
        cout << "Left pointer: " << leftPointer->element << endl;
        cout << "Right pointer: " << rightPointer->element << endl; 
        cout << "Result carry digit: " << result.digit->element << endl;

        if (result.isCarry == true) {
            cout << "result has a carry: " << result.carry << endl;
        } else {
            cout << "No carry" << endl;
        }

        return result;
    } else {
        cout << "Number " << number2 << " is less than number " << number1 << endl;  
    }
}