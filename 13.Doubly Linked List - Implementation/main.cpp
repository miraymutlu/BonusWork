//
// Created by Miray on 23.12.2021.
//

#include "Node13.h"

int main(){
    head13=NULL;
    int length;
    cout<<"How many numbers you want to insert?"<<endl;
    cin>>length;
    cout<<"Enter the numbers you want to insert."<<endl;

    for(int i=0; i<length; i++){
        int number;
        cout<<"Number "<<i+1<<":";
        cin>>number;
        insertAtHead13(number);
        print13();
        reversePrint13();
    }


    return 0;
}*/