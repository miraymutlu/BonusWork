//
// Created by Miray on 23.12.2021.
//

#include "Node16.h"

int main(){
    push16(2);
    push16(5);
    push16(6);
    print16();
    cout<<endl;
    pop16();
    cout<<"6 popped"<<endl;
    print16();
}