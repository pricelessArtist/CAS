#ifndef DOUBLY_LINKED_LIST_HPP
#define DOUBLY_LINKED_LIST_HPP

/*
* A Double linked list will be a class with char nodes, that links between each node from previous to next
*/

struct Node {
    //previous Node Pointer
    Node* previousNode = nullptr;

    //node data value
    char element = NULL;

    //next Node Pointer
    Node* nextNode = nullptr;

    Node(char nodeValue) {
        element = nodeValue;
    }
};

class DoubleLinkedList {
    private:
    
    public:
        Node* firstNode; //first node of double linked list
        Node* lastNode; //last node of the double linked list
        
        DoubleLinkedList() {
            firstNode = nullptr;
            lastNode = nullptr;
        }
        
        Node* allocateNewNode(char nodeValue);

        // inserting node, returns node that was inputted into list
        Node insertNode(char nodeValue);

        // inserting node at the head, returns node that we inputted into the list
        Node* insertNodeBeforeHead(char nodeValue);

        // inserting node before currentNode, returns node that was inputted into list
        Node* insertNodeBefore(char nodeValue, char pickedNodeValue);

        // inserting node after currentNode, returns node that was inputted into list
        Node* insertNodeAfter(char nodeValue, char pickedNodeValue);

        // inserting node at the end of the list
        Node* insertAtEnd(char nodeValue);

        // iterating through list(forward)
        void iterateForward();

        // iterating through list(backwards)
        void iterateBackwards();

        // deleting node
        Node* deleteNode(char pickedNodeValue);    
};

#endif // DOUBLY_LINKED_LIST_HPP