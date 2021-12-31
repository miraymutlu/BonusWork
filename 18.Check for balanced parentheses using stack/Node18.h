//
// Created by Miray on 31.12.2021.
//

#ifndef BONUSWORK_NODE18_H
#define BONUSWORK_NODE18_H
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool pair18(char first, char second){
    if(first == '(' && second == ')') {
        return true;
    }else if(first == '{' && second == '}') {
        return true;
    }else if(first == '[' && second == ']') {
        return true;
    }
    return false;
}

bool checkBalancedParenthesis18(string exp){
    int n= exp.length();
    stack<char>s18;

    for(int i=0; i<n; i++){                                             //Traversing the exp
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{'){
            s18.push(exp[i]);                                             //Push exp[i] to the stack
        } else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(s18.empty() || !pair18(s18.top(), exp[i])) {                   //Stack can't be empty in that position because bracket is closing
                return false;
            }
            else {
                s18.pop();
            }
        }
    }
    if(s18.empty() == true){                                               //If stack is empty, it's already balanced
        return true;
    }else{
        return false;
    }
}
#endif //BONUSWORK_NODE18_H
