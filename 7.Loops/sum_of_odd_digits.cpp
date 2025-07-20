#include<iostream>
using namespace std;
int main(){
    int num = 123;
    int sum_of_odd_digits = 0;
    while(num>0){
        int last_digit = num%10;
        if(last_digit%2 != 0) sum_of_odd_digits += last_digit;
        num /= 10;
    }
    cout<<"the sum of odd digits is: "<<sum_of_odd_digits<<endl;

    // int reverse_num = 0;
    // while(num>0){
    //     int last_digit = num%10;
    //     reverse_num = reverse_num*10 + last_digit;
    //     num /= 10;
    // }
    // cout<<"The reverse num is: "<<reverse_num;
    return 0;
}