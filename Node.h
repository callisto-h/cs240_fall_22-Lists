#ifndef NODE_H
#define NODE_H

class Node{
    public:
        Node *next;
        int value;

        Node(){next = nullptr;}
        Node(int n){
            value = n;
            next = nullptr;
        }
};


#endif