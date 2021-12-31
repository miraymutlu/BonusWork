//
// Created by Miray on 23.12.2021.
//
#include "Node7.h"

int main(){
    head2=NULL;
    int length;

    cout<<"How many numbers you want to insert?"<<endl;
    cin>>length;

    cout<<"First enter the number you want to insert and then enter the which position\n"<<"you want to insert.\n"<<endl;

    for(int i=0; i<length; i++){
        int number;
        int position;
        cout<<"Number "<<i+1<<":";
        cin>>number;
        cout<<"Position "<<i+1<<":";
        cin>>position;
        insert(number,position);
    }
    print2();
}