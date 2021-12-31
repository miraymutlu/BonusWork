//
// Created by Miray on 25.12.2021.
//
#include "Node37.h"
int main(){
    int keys[] = { 16, 11, 21, 9, 13, 17, 26 };
    for (int key: keys){
        root = insert37(root, key);
    }
    for (int key: keys){
        Node37* successor = getSuccessor37(root, NULL, key);

        if (successor != NULL) {
            cout << "Successor of node " << key << " is " << successor->data;
        }
        else {
            cout << "There is no successor for node " << key;
        }
        cout << endl;
    }
}