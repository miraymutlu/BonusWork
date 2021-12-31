//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE11_H
#define BONUSWORK_NODE11_H
#include <iostream>

using namespace std;

struct Node11 {                                       //Defining a structure
    int data;
    Node11 *next;
};
struct Node11* head11;                                  //Creating a global variable can be accessed everywhere.

void insert11(int data) {                             //Insertion function for adding new data.
    Node11* temp = (Node11*) malloc(sizeof(Node11));      //Create a new node.
    temp->data  = data;
    temp->next = head11;
    head11 = temp;
}
void reverse11(Node11* p) {
    if (p->next == NULL) {                          //Exit condition
        head11=p;
        return;
    }
    reverse11(p->next);                               //Recursive call
    Node11* q=p->next;                                //Reverse the list and put the first number at the end
    q->next=p;
    p->next=NULL;                                   //Due to difference of the directions of links we need to remove this link
}
void print11(Node11* head11) {                            //It's a helper function for printing the linked list
    while (head11 != NULL) {                          //While list is not empty, print the data.
        cout << head11->data;
        head11 = head11->next;
        cout << " ";
    }
}
#endif //BONUSWORK_NODE11_H
