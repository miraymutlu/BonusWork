//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE7_H
#define BONUSWORK_NODE7_H
#include <iostream>

using namespace std;

struct Node7{                            //Defining a structure
    int data;
    Node7* next;
};

struct Node7* head2;                      //Creating a global variable can be accessed everywhere.

void insert(int data,int n){            //Insertion function for adding new data.
    Node7* temp1=new Node7();             //Create a new node.
    temp1->data=data;
    temp1->next=NULL;

    if (n==1){                          //This case for the first head position.
        temp1->next=head2;               //Set the linked field whatever the existing head is.
        head2=temp1;                     //Adjust the new variable
        return;
    }
    Node7* temp2=head2;
    for(int i=2; i<n; n++){             //We are already at the first node, if we want to reach the (n-1)'th node, we need to start i at 2.
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void print2(){                           //It's a helper function for printing the linked list
    Node7* temp = head2;
    while (temp!=NULL){                 //While list is not empty, print the data.
        cout<<temp->data;
        temp=temp->next;
        cout<<" ";
    }
}
#endif //BONUSWORK_NODE7_H
