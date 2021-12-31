//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE13_H
#define BONUSWORK_NODE13_H
#include <iostream>

using namespace std;

struct Node13{                                        //Defining a structure
    int data;
    Node13* next;
    Node13* prev;
};
struct Node13* head13;                                  //Creating a global variable can be accessed everywhere.

struct Node13* getNewNode13(int x){
    Node13* newNode= (Node13*) malloc(sizeof (Node13));   //Create a new node.
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}
void insertAtHead13(int x){
    Node13* newNode= getNewNode13(x);
    if(head13 == NULL){                                 //Exit condition
        head13=newNode;
        return;
    }
    head13->prev=newNode;                             //Set the previous node
    newNode->next=head13;
    head13=newNode;

}
void print13(){                                       //It's a helper function for printing the linked list
    Node13* temp=head13;
    cout<<"Forward: ";
    while (temp!=NULL){                             //While list is not empty, print the data.
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reversePrint13(){
    Node13* temp=head13;
    if (temp==NULL) {                               //Exit condition
        return;
    }

    while(temp->next!=NULL){                        //Going to last node
        temp=temp->next;
    }
    cout<<"Reverse: ";
    while (temp!=NULL){                             //Traversing backward using prev pointer
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
#endif //BONUSWORK_NODE13_H
