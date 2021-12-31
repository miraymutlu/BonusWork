//
// Created by Miray on 23.12.2021.
//

#include "Node21.h"

int main(){
    string exp;
    cout << "Enter the expression you want to evaluate:";
    cin >> exp;
    cout << infixToPostfix21(exp);
    return 0;
}
