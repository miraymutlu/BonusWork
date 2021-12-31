//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE8_H
#define BONUSWORK_NODE8_H
#include <iostream>

using namespace std;

struct Node8{                                        //Defining a structure
public:
    Node8* next;
    int data;
};

struct Node8* head8;                                  //Creating a global variable can be accessed everywhere.

void insert8(int number) {                           //Insertion function for adding new data.
    Node8 *temp = (Node8 *) malloc(sizeof(Node8));     //Create a new node.
    temp->data = number;
    temp->next = NULL;
    if (head8 == NULL) {                             //This case for the beginning at the node.
        head8 = temp;
    } else {
        Node8 *temp2 = head8;
        while (temp2->next != NULL) {               //While temp2's next node is not null linked with other node.
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}
void print8(){                                       //It's a helper function for printing the linked list
    Node8* temp=head8;
    cout<<"Forward: ";
    while (temp!=NULL){
        cout<<temp->data<<" ";                      //While list is not empty, print the data.
        temp=temp->next;
    }
    cout<<endl;
}
void delete8(int n){
    Node8* temp1=head8;
    if(n==1){                                       //This case for the first head position.
        head8=temp1->next;                           //Changing head
        delete(temp1);                              //Delete temp1
        return;
    }
    for(int i=2; i<n;i++){                          //We are already at the first node, if we want to reach the (n-1)'th node, we need to start i at 2.
        temp1=temp1->next;
    }
    Node8* temp2=temp1->next;
    temp1->next=temp2->next;
    delete(temp2);

}
#endif //BONUSWORK_NODE8_H
