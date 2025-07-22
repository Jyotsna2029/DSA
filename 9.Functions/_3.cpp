#include<iostream>
using namespace std;
void oddEven(int n){
    if(n%2 == 0) cout<<"Even";
    else cout<<"Odd";
    
}
int main(){
    int num1 = 5;
    oddEven(num1);
    return 0;
}