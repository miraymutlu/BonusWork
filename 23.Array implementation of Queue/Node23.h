//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE23_H
#define BONUSWORK_NODE23_H
#include <iostream>

using namespace std;

int A23[5];                                   //Creating an array of length 5
int front=-1;
int rear=-1;

bool isEmpty23(){
    if(front==-1 && rear==-1){              //Whether array is empty
        return true;
    } else{
        return false;
    }
}
void enqueue23(int x){
    if(rear==4){                            //Overflow situation
        cout<<"Overflow";
    }else if(isEmpty23()){                    //If queue is empty
        front=rear=0;
    } else{                                 //Insert element at rear
        rear=rear+1;
    }
    A23[rear]=x;
}
void dequeue23(){
    if(isEmpty23()){                          //If queue is empty
        return;
    } else if(front==rear){                 //If this happens it means that queue is empty so we need to set front and rear -1.
        front=rear=-1;
    } else{                                 //In normal scenario we need to increment front
        front=front+1;
    }
}
void display23(){                             //It's a display function which shows us the queue
    if (front==-1 && rear==-1) {
        cout<<"Queue is empty";
        return;
    }
    for (int i = front; i < rear+1; i++) {
        cout<<A23[i]<<" ";
    }
    return;
}

#endif //BONUSWORK_NODE23_H
