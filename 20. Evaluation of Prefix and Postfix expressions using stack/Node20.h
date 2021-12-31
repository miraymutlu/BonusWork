//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE20_H
#define BONUSWORK_NODE20_H
#include <iostream>
#include <string>
#include <stack>

using namespace std;

double evaluatePostfix20(string exp) {

    stack<int> s;                                   //Create a new stack
    int oper1;
    int oper2;

    for (int i = 0; i <exp.length(); i++) {         //Scanning the characters
        if (exp[i] >= '0' && exp[i] <= '9') {       //If exp[i] is an operand push it into the stack
            s.push(exp[i]-'0');
        }
        else {                                      //If exp[i] is an operator pop two values from the stack
            oper1 = s.top();
            s.pop();

            oper2 = s.top();
            s.pop();

            if (exp[i] == '+') {                    //Evaluate the expressions
                s.push(oper2+oper1);
            }
            else if (exp[i] == '-') {
                s.push(oper2-oper1);
            }
            else if (exp[i] == '*') {
                s.push(oper2*oper1);
            }
            else if (exp[i] == '/') {
                s.push(oper2/oper1);
            }
        }
    }
    return s.top();                                 //At that point there is only one value in stack.
}
#endif //BONUSWORK_NODE20_H
