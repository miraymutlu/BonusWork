//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE16_H
#define BONUSWORK_NODE16_H

#include <iostream>
using namespace std;

struct Node16{                                        //Defining a structure
    int data;
    Node16* link;
};
struct Node16* top16 = NULL;                            //Global variable can be accessed everywhere

void push16(int x){
    Node16* temp=(Node16*) malloc(sizeof (Node16*));      //Create a new node.
    temp->data=x;                                   //Initialize the data
    temp->link=top16;                                 //Putting the top pointer into the link
    top16=temp;                                       //Temp is top od the stack now
}
void pop16(){
    Node16* temp;
    if(top16==NULL){                                  //Exit condition
        return;
    }
    temp=top16;                                       //Assigning the top into the temp
    top16=top16->link;                                  //Assigning second node to the top
    delete(temp);                                   //This line deletes the memory of the top
}
void print16(){
    Node16* temp;                                     //It's a helper function for printing the linked list
    temp = top16;
    while (temp != NULL){                           //While list is not empty, print the data.
        cout << temp->data <<" ";
        temp = temp->link;
    }
}
#endif //BONUSWORK_NODE16_H
