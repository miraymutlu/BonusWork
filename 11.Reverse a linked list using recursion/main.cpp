//
// Created by Miray on 23.12.2021.
//

#include "Node11.h"

int main(){
    int length;
    cout<<"How many numbers you want to insert?"<<endl;
    cin>>length;
    cout<<"Enter the numbers you want to insert."<<endl;

    for(int i=0; i<length; i++){
        int number;
        cout<<"Number "<<i+1<<":";
        cin>>number;
        insert11(number);
    }
    cout<<"Before the reverse:";
    print11(head11);
    cout<<"\n";
    cout<<"After the reverse:";
    reverse11(head11);
    print11(head11);

    return 0;
}
