#include<iostream>
using namespace std;
int main(){

    // int age;
    // cout<<"enter your age: ";
    // cin>>age;
    // if(age >= 18) {
    //     cout<<"You are eligible to Vote."<<endl;
    // }
    // else{
    //     cout<<"You are not eligible to Vote."<<endl;
    // }




    // float num1, num2;
    // cout<<"enter the  num1: ";
    // cin>>num1;
    // cout<<"enter the num2: ";
    // cin>>num2;
    // if(num1 > num2){
    //     cout<<num1<<" is greater than "<<num2;
    // }
    // else{
    //     cout<<num2<<" is greater than "<<num1;
    // }


    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num % 2 == 0) {
        cout<<num<<" is an even number."<<endl;
    }
    else {
        cout<<num<<" is an odd number."<<endl;
    }
    return 0;
}