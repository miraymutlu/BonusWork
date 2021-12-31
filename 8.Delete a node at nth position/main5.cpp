//
// Created by Miray on 23.12.2021.
//

#include "Node8.h"

int main(){
    head=NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(5);
    print();
    int n;
    cout<<"Enter a position: "<<endl;
    cin>>n;
    deletee(n);
    print();
}