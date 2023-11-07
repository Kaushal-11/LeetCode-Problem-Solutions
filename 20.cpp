#include<bits/stdc++.h>
using namespace std;

//Check for balanced paranthesis in a string
bool matching(char a, char b){
    return ( (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']') );
}

bool isValid(string str){
    stack<int> s;

    for(int i=0; i<str.size(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            s.push(str[i]);
        }
        else{
            if(s.empty() == true){
                return false;
            }
            else if(matching(s.top(),str[i])){
                s.pop();
            }
            else    
                return false;
        }
    }
    return s.size() == 0;
}
