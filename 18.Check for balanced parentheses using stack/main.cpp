//
// Created by Miray on 23.12.2021.
//
#include "Node18.h"

int main(){
    string exp;
    cout << "Enter string:";
    cin >> exp;
    if (checkBalancedParenthesis18(exp)) {
        cout << "Balanced";
    }
    else {
        cout << "Not Balanced";
    }
    return 0;
}


