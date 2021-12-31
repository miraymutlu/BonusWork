//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE36_H
#define BONUSWORK_NODE36_H
#include <iostream>

using namespace std;

struct Node36{                                        //Defining a structure
    int data;
    Node36 *left;
    Node36 *right;
};
Node36* newNode36(int item){                            //Create a new node.
    Node36* temp = new Node36;
    temp->data= item;
    temp->left = temp->right = NULL;
    return temp;
}
void print36(Node36* root){                             //It's a helper function for printing
    if (root != NULL) {
        print36(root->left);
        cout<<root->data<<" ";
        print36(root->right);
    }
}
struct Node36* insert36(Node36* node, int data){
    if (node == NULL)                               //Exit condition
        return newNode36(data);
    if (data < node->data)
        node->left = insert36(node->left, data);       //If data is equal or lesser than Node's data
    else
        node->right = insert36(node->right, data);     //Data is greater than Node's data.
    return node;
}
struct Node36* findMin36(Node36* root){
    Node36* current = root;
    while (current && current->left != NULL) {                 //This loop is used to find the leftmost leaf
        current = current->left;
    }
    return current;
}
struct Node36* delete36(Node36 *root, int data){
    if(root==NULL){                                     //Exit condition
        return root;
    } else if(data<root->data){
        root->left= delete36(root->left,data);           //If the data to be deleted is less than the root's data, it reaches to the left.
    } else if(data>root->data){
        root->right= delete36(root->right,data);         //If the data to be deleted is greater than the root's data, it reaches to the right.
    }else{
        if(root->left == NULL && root->right == NULL){  //If there is no subtree
            delete root;
            root=NULL;
            return root;
        }else if(root->left == NULL){                   //If there is one subtree
            Node36 *temp=root;
            root=root->right;
            delete temp;
            return root;
        }else if(root->right==NULL){                    //If there is one subtree
            Node36 *temp=root;
            root=root->left;
            delete temp;
            return root;
        }else{
            Node36 *temp= findMin36(root->right);     //If there are more than one subtree
            root->data=temp->data;                                          //It takes the inorder successor's contents the other node
            root->right= delete36(root->right, temp->data);                  //Deletes inorder successors
        }
    }
    return root;
}
#endif //BONUSWORK_NODE36_H
