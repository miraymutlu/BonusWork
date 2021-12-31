//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE17_H
#define BONUSWORK_NODE17_H
#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

void reverse17(char *c,int n){
    stack<char> s17;                      //Creating a stack
    for(int i=0;i<n;i++){               //Push characters to the stack
        s17.push(c[i]);
    }
    for(int i=0;i<n;i++){               //Pop all characters and put it to the c[i]
        c[i]=s17.top();
        s17.pop();
    }
}
#endif //BONUSWORK_NODE17_H
