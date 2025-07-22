#include<iostream>
using namespace std;
int reverse(int n){
    int rev = 0;
    while(n>0){
        int last_digit = n% 10;
        rev = rev * 10 + last_digit;
        n /= 10;
    }
    return rev;
}
bool isPalindrome(int n){
    if(reverse(n) == n) return true;
    return false;
}
int main(){
    int n = 321;
    isPalindrome(n);
    cout << n << " is " <<(isPalindrome(n) ? "a Palindrome" : "is not Palindrome." )<<endl;
    return 0;
}