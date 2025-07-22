#include<iostream>
using namespace std;
int sumofDigits(int n){
    int sum = 0;
    while(n > 0){
        int last_digit = n % 10;
        sum += last_digit;
        n /= 10;
    }
    return sum;
}
int main(){
    int n = 123;
    cout<<"The sum of digits of number is: "<<sumofDigits(n);
    return 0;
}