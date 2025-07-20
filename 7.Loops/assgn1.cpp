#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    if(num == 0) cout<<"Factorial of 0 is 1"<<endl;
    long long factorial = 1;
    for(int i = 1; i<=num; i++){
        factorial *= i;
    }
    cout<<"The factorial of number is : "<<factorial<<endl;
    return 0;
}