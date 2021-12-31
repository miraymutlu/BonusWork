//
// Created by Miray on 23.12.2021.
//

#include <iostream>
#include "Node6.h"
using namespace std;

int main(){

    head=NULL;
    cout<<"How many numbers?"<<endl;

    int size;
    int number;

    cin>>size;
    cout<<"Enter the numbers:";

    for(int i=0; i<size; i++){
        cin>>number;
        insert(number);
        print();
    }
}
