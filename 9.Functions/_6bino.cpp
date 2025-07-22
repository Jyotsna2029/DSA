#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int binomial(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);
    return val1 / (val2* val3);
}
int main(){
    int n = 3;
    int r = 2;
    cout << "Binomial coefficient C(" << n << ", " << r << ") is: " << binomial(n, r) << endl;
}