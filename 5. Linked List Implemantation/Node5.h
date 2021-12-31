//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE55_H
#define BONUSWORK_NODE55_H
#include <iostream>
using namespace std;

struct Node5{                      //Defining a structure
public:
    int data;
    Node5* link;
};

void printList(Node5* node5) {      //It's a helper function for printing the linked list

    while (node5 != NULL) {        //While list is not empty, print the data.
        cout << node5->data<<" ";
        node5 = node5->link;
    }
}
#endif //BONUSWORK_NODE55_H
