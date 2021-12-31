//
// Created by Miray on 22.12.2021.
//

#include "Node5.h"
using namespace std;

int main(){

    int x,y,z;
    cout<<"Enter the three numbers you want to linked: "<<endl;
    cin>>x>>y>>z;

    Node* head = NULL;             //Empty list
    head = new Node();             //Creating a new node in the heap

    Node* temp1 = NULL;
    temp1 = new Node();

    Node* temp2 = NULL;
    temp2 = new Node();

    head->data=x;                   //Assigning a data to node
    head->link=temp1;               //Link this node with the right next node

    temp1->data=y;
    temp1->link=temp2;

    temp2->data=z;
    temp2->link=NULL;

    printList(head);                //Print the linked list

    return 0;
}
