//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE37_H
#define BONUSWORK_NODE37_H

#include <iostream>

using namespace std;
struct Node37{                                    //Defining a new structure
    int data;
    Node37 *left;
    Node37 *right;
};
struct Node37 *root37;                              //Global variable can be accessed everywhere

Node37* getNewNode37(int data){                     //Create a new node.
    Node37* newNode = new Node37();
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}
Node37* insert37(Node37* root37, int data){
    if(root37==NULL){                             //Exit condition
        root37= getNewNode37(data);
    }else if(data<=root37->data){                 //If data is equal or lesser than root's data
        root37->left= insert37(root37->left,data);
    }else{                                      //Data is greater than root's data.
        root37->right= insert37(root37->right,data);
    }
    return root37;
}

struct Node37* findMin37(Node37* root37){
    if(root37==NULL){                             //Exit condition
        return NULL;
    }while(root37->left!=NULL){                   //This loop is used to find the leftmost leaf
        root37=root37->left;
    }
    return root37;
}
Node37* getSuccessor37(Node37* root37, Node37* successor, int data){
    if (root37 == NULL) {                         //Exit condition
        return successor;
    }
    if (root37->data == data){                    //If wanted data is found and node is not empty return to right tree
        if (root37->right != NULL) {
            return findMin37(root37->right);
        }
    }else if (data < root37->data){               //If data is less than the root's data, then apply recursion for the left child.
        successor = root37;                       //Updating the successor into the current node
        return getSuccessor37(root37->left, successor, data);
    } else {                                    //If data is less than the root's data, then apply recursion for the right child.
        return getSuccessor37(root37->right, successor, data);
    }

    return successor;
}
#endif //BONUSWORK_NODE37_H
