//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE15_H
#define BONUSWORK_NODE15_H
#include <iostream>
#define MAX_SIZE15 101
using namespace std;

int A[MAX_SIZE15];
int top=-1;                                         //Empty stack

void push15(int x){
    if(top == MAX_SIZE15 - 1){                            //Handling overflow
        cout<<"Error: Stack overflow\n";
        return;
    }
    A[++top]=x;                                     //Increment happen before assigning.
}
void pop15(){
    if(top==-1){                                    //If stack is empty we cannot pop so this is the exit condition
        cout<<"Error: No element to pop\n";
        return;
    }
    top--;
}
void print15(){                                       //It's a helper function for printing the linked list
    cout<<"Stack: ";
    for(int i=0; i<=top; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
#endif //BONUSWORK_NODE15_H
