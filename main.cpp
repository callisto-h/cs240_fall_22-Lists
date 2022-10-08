#include "Node.h"
#include <iostream>

/**
 * @brief Create a linked list of size n
 * 
 * @param n size 
 * @return Node* , the pointer to the head of the list
 */
// THIS FUNCTION IS VERY CHALLENGING!
Node * createList(int n){
    Node * head = nullptr; // this node will be the front of the list which we return
    return head; // give back the front of the list
}

/**
 * @brief Prints the contents of the linked list
 * 
 * @param head , the head of the linked list
 */
void printList(Node *head){}

/**
 * @brief This function deletes all the nodes so we don't
 * have any memory leaks. I would read and understand how
 * the while loop operates
 * 
 * @param current the head of the list you want to clean up
 */
void cleanup(Node *current){
    Node *next;
    while(current){ // checks to see if we're at the end of the list
        next = current->next; // if not, grab the next node
        delete current; // delete the current node
        current = next; // set the current node to the next node
    }
}

int main(){
    // creating a list: 1->2->3->4->nullptr
    // This is an example as to how you should not
    // be making your linked lists, I just wanted
    // to illustrate the process very clearly.
    // Ideally, when making your lists, you would
    // use some kind of loop.
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    printList(head);

    Node *head2 = createList(10);
    printList(head2);

    cleanup(head);
    cleanup(head2);
    
}