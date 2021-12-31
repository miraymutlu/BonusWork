//
// Created by Miray on 25.12.2021.
//

#include "Node36.h"

int main(){
    int x;
    Node36* root = NULL;
    root = insert36(root, 5);
    root = insert36(root, 3);
    root = insert36(root, 2);
    root = insert36(root, 4);
    root = insert36(root, 7);
    root = insert36(root, 6);
    root = insert36(root, 8);

    cout<<"Traversal: ";
    print36(root);
    cout<<endl;
    cout<<"What data do you want to delete?"<<endl;
    cin>>x;
    cout<<"After deletion: ";
    root = delete36(root, x);
    print36(root);
}