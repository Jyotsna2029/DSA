#include<iostream>
using namespace std;
int main(){
    const int n = 25;

    // // not allowed
    // const PI; 
    // PI = 3.14; // error: 'PI' was not declared in this scope
    const double PI = 3.14; // allowed, PI is a constant
    return 0;
}