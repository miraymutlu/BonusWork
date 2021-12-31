//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE9_H
#define BONUSWORK_NODE9_H
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node9{                                        //Defining a structure
    int data;
    Node9* next;
};

struct Node9* head9;                                  //Creating a global variable can be accessed everywhere.

struct Node9* reverse9(Node9* head9){
    Node9 *current,*prev,*next;
    current=head9;
    prev=NULL;
    while(current != NULL){
        next=current->next;                         //Store the next
        current->next=prev;                         //Reverse current node's pointer
        prev=current;                               //Moves pointers to one forward position
        current= next;
    }
    head9=prev;
    return head9;
}
void print9(Node9* head9){                             //It's a helper function for printing the linked list
    while (head9!=NULL){                             //While list is not empty, print the data.
        cout<<head9->data;
        head9=head9->next;
        cout<<" ";
    }
}
void insert9(int data) {                             //Insertion function for adding new data.
    Node9* temp = (Node9*) malloc(sizeof(Node9));      //Create a new node.
    temp->data  = data;
    temp->next = head9;
    head9 = temp;
}

#endif //BONUSWORK_NODE9_H
