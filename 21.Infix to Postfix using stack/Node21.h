//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE21_H
#define BONUSWORK_NODE21_H
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int hasHigherPrec21(char c){            //This helper function will be used to determine which operator has precedence.
    if(c == '+' || c == '-') {        //Lowest precision.
        return 1;
    }else if(c == '*' || c == '/') {
        return 2;
    }else if(c == '^') {              //Highest precision.
        return 3;
    }
    return 0;
}
string infixToPostfix21(string exp){    //This function will be used for convert infix to postfix.
    stack<char> s;
    string final;

    for(int i = 0; i < exp.length(); i++) {                                                                             //This loop will show each character of the entered string in turn.

        if((exp[i]>= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= '0' && exp[i] <= '9')) {   //If exp[i] operand, it will be added directly to the output string.
            final += exp[i];

        }else if(exp[i] == '(') {    //If exp[i] '(', it will be pushed directly to the stack.
            s.push('(');

        }else if(exp[i] == ')') {
            while(s.top() != '(')    //If exp[i] ')', it will stored and pop until an '(' comes out.
            {
                final += s.top();
                s.pop();
            }
            s.pop();
        }

        else {                                                                      //If exp[i] is an operator.
            while(!s.empty() && hasHigherPrec21(exp[i]) <= hasHigherPrec21(s.top())) {  //If exp[i]'s precedence order equal or less than the top then pop it out of stack.
                final += s.top();                                                   //Store and pop it until the higher precedence is found.
                s.pop();
            }
            s.push(exp[i]);                                                         //Otherwise, push it to the stack.
        }
    }
    while(!s.empty()) {                                                             //Store it and po until the stack isn't empty.
        final += s.top();
        s.pop();
    }

    return final;
}
#endif //BONUSWORK_NODE21_H
