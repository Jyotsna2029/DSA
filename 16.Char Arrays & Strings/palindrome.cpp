#include<iostream>
#include <cstring>
#include<climits>
using namespace std;
bool isPalindrome(char s[], int n){
    int start = 0; 
    int end = n-1;
    while(start < end){
        if(s[start] != s[end]) {
            cout<<"not valid Palindrome\n";
            return false;
        }
        start++;
        end--;
    }
    cout<<"valid Palindrome\n";
    return true;
}
int main(){
    char word[] = "racecar";
    isPalindrome(word, strlen(word));
    return 0;
}