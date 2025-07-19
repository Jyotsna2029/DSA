#include<iostream>
using namespace std;
int main(){
    bool isAdult;
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    isAdult = (age >= 18) ? true : false;
    if(isAdult) cout<<"Yes, the person is an adult."<<endl;
    else cout<<"No, the person is not an adult."<<endl; 
}