//
// Created by Miray on 23.12.2021.
//

#include "Node20.h"

int main(){
    string exp;
    cout << "Enter the expression you want to evaluate:";
    cin >> exp;
    int result=evaluatePostfix20(exp);
    cout<<result<<" ";
    return 0;
}