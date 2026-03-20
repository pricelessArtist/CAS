#include <iostream>
#include "DoublyLinkedList.hpp"
using namespace std;

DoubleLinkedList list;

Node* DoubleLinkedList::allocateNewNode(char nodeValue) {
    Node* newNode = new Node(nodeValue);
    
    return newNode;
}

Node DoubleLinkedList::insertNode(char nodeValue) {
    Node* newNode = list.allocateNewNode(nodeValue);
    
    if (firstNode == nullptr) {
        newNode->previousNode = nullptr;
        newNode->nextNode = nullptr;
        firstNode = newNode;
        lastNode = newNode;
    } else {
        Node* headNode = firstNode;
        Node* nextNode = (Node *)realloc(newNode, sizeof(Node));
        nextNode->element = nodeValue;
        nextNode->previousNode = headNode;
        headNode->nextNode = nextNode;
        lastNode = nextNode;

        cout << "Next node previous node: " << nextNode->previousNode->element << endl;
        cout << "Next node current value: " << nextNode->element << endl;
        cout << "Head node: " << headNode->element << endl;
        cout << " " << endl;
    } 
    
    
    Node currentNode = *newNode;
    return currentNode;
}

Node* DoubleLinkedList::insertNodeBeforeHead(char nodeValue) {
    Node* head = firstNode;
    Node* newNode = list.allocateNewNode(nodeValue);

    newNode->nextNode = head;
    newNode->previousNode = NULL;
    head->previousNode = newNode;
    lastNode = head;
    firstNode = newNode;

    cout << "New head node: " << newNode->element << endl;
    cout << "New head previous node: " << newNode->previousNode << endl;
    cout << "New head next node: " << newNode->nextNode->element << endl;
    cout << "Last node: " << lastNode->element << endl;
    return newNode;
}

Node* DoubleLinkedList::insertNodeAfter(char nodeValue, char pickedNodeValue) {
    Node* head = firstNode;
    Node* newNode = list.allocateNewNode(nodeValue);
    while (head != nullptr) {
        if (head->element == pickedNodeValue) {
            newNode->previousNode = head;
            newNode->nextNode = nullptr;
            head->nextNode = newNode;

            break;
        }
        head = head->nextNode;
    }
    lastNode = newNode;
    cout << "New node value: " << newNode->element << endl;
    cout << "New node next node value: " << newNode->nextNode << endl;
    cout << "New node previous node value: " << newNode->previousNode->element << endl;
    return newNode;
}

Node* DoubleLinkedList::insertNodeBefore(char nodeValue, char pickedNodeValue) {
    Node* head = firstNode;
    Node* newNode = list.allocateNewNode(nodeValue);

    while (head != nullptr) {
        if (head->element == pickedNodeValue) {
            newNode->previousNode = head->previousNode;
            newNode->nextNode = head;
            head->previousNode = newNode;

            if (head->previousNode != nullptr) {
                newNode->previousNode->nextNode = newNode;
            } else {
                firstNode = newNode;
            }

            break;
        }
        head = head->nextNode;
    }
    lastNode = head->nextNode;
    cout << "New node value: " << newNode->element << endl;
    cout << "New node next node value: " << newNode->nextNode << endl;
    cout << "New node previous node value: " << newNode->previousNode->element << endl;
    return newNode;     
}

Node* DoubleLinkedList::insertAtEnd(char nodeValue) {
    Node* newNode = allocateNewNode(nodeValue);
    Node* tail = lastNode;

    while (tail != nullptr) {
        if (tail->previousNode != nullptr) {
            newNode->previousNode = tail;
            newNode->nextNode = nullptr;
            tail->nextNode = newNode;
            break;
        }
    }
    lastNode = newNode;
    return newNode;
}

void DoubleLinkedList::iterateForward() {
    Node* head = firstNode;
    while (head != nullptr) {
        cout << head->element;
        if (head->nextNode != nullptr) {
            cout << " <--> ";
        }
        head = head->nextNode;
    }
    cout << endl;
}

void DoubleLinkedList::iterateBackwards() {
    Node* tail = lastNode;
    while (tail != nullptr) {
        cout << tail->element;
        if (tail->previousNode != nullptr) {
            cout << " <--> ";
        }
        tail = tail->previousNode;
    }
    cout << endl;
}

Node* DoubleLinkedList::deleteNode(char pickedNodeValue) {
    //we look for the pickedNodeValue and then get the nodes previous and nextNode
    Node* head = firstNode;
    Node* removeNode;

    while (head != nullptr) {
        if (head->element == pickedNodeValue) {
            cout << "Found Deleted element " << pickedNodeValue << endl;  
            
            if (head->previousNode == nullptr) {
                firstNode = head->nextNode;
            } else {
                head->previousNode->nextNode = head->nextNode;
            }

            if (head->nextNode == nullptr) {
                lastNode = head->previousNode;
            } else {
                head->nextNode->previousNode = head->previousNode;
            }
            break;          
        }
        head = head->nextNode;
    }
    return head;
}