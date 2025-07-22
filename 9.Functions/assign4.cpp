#include<iostream>
using namespace std;
int identity(int a, int b){
    cout<<"a^2+b^2+2ab that is: ";
    return a*a + b*b + 2*a*b;
}
int main(){
    int a = 4;
    int b = 5;
    cout<<"(a+b)^2 is equal to "<<identity(a, b);
    return 0;
}