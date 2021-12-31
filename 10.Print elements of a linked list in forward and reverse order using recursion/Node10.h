//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE10_H
#define BONUSWORK_NODE10_H

#include <iostream>

using namespace std;

struct Node10 {                                   //Defining a structure
    int data;
    Node10 *next;
};

struct Node10* head10;                              //Creating a global variable can be accessed everywhere.

void insert10(int data) {                         //Insertion function for adding new data.
    Node10* temp = (Node10*) malloc(sizeof(Node10));  //Create a new node.
    temp->data  = data;
    temp->next = head10;
    head10 = temp;
}

void reverse10(Node10* p){
    if(p==NULL){                                 //Exit condition
        return;
    }
    reverse10(p->next);                            //Recursive call
    cout<<(p->data)<<" ";
}
void print10(Node10* p){                             //It's a helper function for printing the linked list
    if(p==NULL){                                 //Exit condition
        return;
    }
    cout<<p->data<<" ";
    print10(p->next);                              //Recursive call
}
#endif //BONUSWORK_NODE10_H
