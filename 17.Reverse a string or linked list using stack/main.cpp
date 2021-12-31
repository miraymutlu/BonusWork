//
// Created by Miray on 23.12.2021.
//

#include <iostream>
#include <cstdio>
#include "Node17.h"

int main(){
    char c[51];
    cout<<"Enter a string:";
    cin>>c;
    reverse17(c, strlen(c));
    cout<<"Output: "<<c;
}