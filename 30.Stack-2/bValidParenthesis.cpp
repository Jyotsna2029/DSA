#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string str){
    stack<char>s;
    for(int i = 0; i<str.size(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '[') {//opening
            s.push(ch);
        }else{//closing
            if(s.empty()) return false;

            int top = s.top();
            if((top == '(' && ch == ')') ||
            (top == '{' && ch == '}') ||
            (top == '[' && ch == ']')){
                // valid then pop
                s.pop();
            }else return false;
            
        }
    }
    return s.empty();
}
int main(){
    string str1 = "([}])";
    string str2 = "({[]})";
    cout<<isValid(str1)<<endl;
    cout<<isValid(str2);
    return 0;
}