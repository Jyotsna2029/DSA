#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter num1: ";
    cin>>num1;
    int num2;
    cout<<"Enter num2: ";
    cin>>num2;

    char basic_operator;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>basic_operator;
    switch(basic_operator){
        case '+':cout<<"Result: "<<num1 + num2<<endl;
                 break;
        case '-':cout<<"Result: "<<num1 - num2<<endl;        
                 break;
        case '*':cout<<"Result: "<<num1 - num2<<endl; 
                 break;
        case '/':cout<<"Result: "<<num1 / num2<<endl;    
                 break;
        default: cout<<"Invalid operator"<<endl;
    }
    return 0;
}