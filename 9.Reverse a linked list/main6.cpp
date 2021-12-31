//
// Created by Miray on 23.12.2021.
//
#include "Node9.h"

int main(){
    int length;
    cout<<"How many numbers you want to insert?"<<endl;
    cin>>length;
    cout<<"Enter the numbers you want to insert."<<endl;

    for(int i=0; i<length; i++){
        int number;
        cout<<"Number "<<i+1<<":";
        cin>>number;
        insert(number);
    }
    cout<<"Before the reverse:";
    print(head);
    cout<<"\n";
    cout<<"After the reverse:";
    head=reverse(head);
    print(head);

    return 0;
}

