//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE66_H
#define BONUSWORK_NODE66_H
#include <iostream>
using namespace std;

struct Node6{                                        //Defining a structure
    Node6();
    int data;
    Node6* next;
};

struct Node6*head6;                                   //Creating a global variable can be accessed everywhere.

void insert(int number) {                            //Insertion function for adding new data.
    Node6*temp = (Node6*) malloc(sizeof (Node6));    //Create a new node6
    temp->data = number;
    temp->next = head6;
    head6=temp;
}
void print(){                                       //It's a helper function for printing the linked list

    Node6* temp = head6;
    while (temp!=NULL){                             //While list is not empty, print the data.
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
#endif //BONUSWORK_NODE66_H
