//
// Created by Miray on 23.12.2021.
//

#include "Node10.h"

int main() {
    int length;
    cout<<"How many numbers you want to insert?"<<endl;
    cin>>length;
    cout<<"Enter the numbers you want to insert."<<endl;

    for(int i=0; i<length; i++){
        int number;
        cout<<"Number "<<i+1<<":";
        cin>>number;
        insert10(number);
    }
    cout<<"Forward:";
    print10(head10);
    cout<<"\n";
    cout<<"After the reverse:";
    reverse10(head10);

    return 0;
}
