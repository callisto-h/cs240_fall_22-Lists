#include "Node.h"
#include <iostream>

/**
 * @brief Create a linked list of size n
 * 
 * @param n size 
 * @return Node* , the pointer to the head of the list
 */
Node * createList(int n){
    Node * traversal = nullptr; // this node will walk down the list
    Node * head = nullptr; // this node will be the front of the list which we return
    for(int i = 1; i <= n; ++i){
        if(i == 1){ // the first node needs to be created
            traversal = new Node(i);
            head = traversal; // we keep track of where the first node is
        }
        traversal->next = new Node(i); // we create a node down the list
        traversal = traversal->next; // advance down the list
    }

    return head; // give back the front of the list
}

/**
 * @brief Prints the contents of the linked list
 * 
 * @param head , the head of the linked list
 */
void printList(Node *head){
    while(head){
        std::cout << head->value << "->";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

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