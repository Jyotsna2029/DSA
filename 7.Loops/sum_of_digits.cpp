#include<iostream>
using namespace std;
int main(){
    int num = 10829;
    int sum_of_digits = 0;
    while(num>0){
        int last_digit = num%10;
        sum_of_digits += last_digit;
        num /= 10;
    }
    cout<<"The sum of digits is: "<<sum_of_digits<<"\n";
    return 0;

}