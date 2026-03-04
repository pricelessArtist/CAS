#ifndef DOUBLY_LINKED_LIST_HPP
#define DOUBLY_LINKED_LIST_HPP

/*
* A Double linked list will be a class with char nodes, that links between each node from previous to next
*/

struct Node {
    //previous Node Pointer
    struct Node* previousNode = NULL;

    //node data value
    char element = NULL;

    //next Node Pointer
    struct Node* nextNode = NULL;
};

class DoubleLinkedList {
    private:
        struct Node* firstNode; //first node of double linked list
        struct Node* lastNode; //last node of the double linked list

    public:
        DoubleLinkedList() {
            firstNode = NULL;
            lastNode = NULL;
        }
        
        Node* allocateNewNode(char nodeValue);

        // inserting node, returns node that was inputted into list
        Node insertNode(char nodeValue);

        // inserting node at the head, returns node that we inputted into the list
        Node* insertNodeBeforeHead(char nodeValue);

        // inserting node before currentNode, returns node that was inputted into list
        Node insertNodeBefore(char nodeValue);

        // inserting node after currentNode, returns node that was inputted into list
        Node* insertNodeAfter(char nodeValue, char pickedNodeValue);

        // iterating through list(forward)
        void iterateForward();

        // iterating through list(backwards)
        void iterateBackwards();

        // iterate through list to get last node
        Node getLastNode();

        // deleting node
        Node deleteNode();    
};

#endif // DOUBLY_LINKED_LIST_HPP