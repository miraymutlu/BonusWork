//
// Created by Miray on 28.12.2021.
//

#include "Node23.h"
#include <iostream>

int main(){
    int x;
    int y;
    int z;
    cout<<"This is an array of length 5.\nHow many numbers do you want to enqueue?";
    cin>>x;
    cout<<"Enter the numbers you want to enqueue."<<endl;
    for(int i=0; i<x;i++) {
        cout << "Number " << i + 1<<":";
        cin >> y;
        enqueue23(y);
        if(i==x-1 && i<=4){
            cout<<"Queue:";
        }
    }
    display23();
    cout<<endl;
    cout<<"How many times do you want to dequeue."<<endl;
    cin >> z;
    for(int i=0; i<z;i++) {
        dequeue23();
    }
    display23();
    return 0;
}
