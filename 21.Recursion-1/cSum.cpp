#include<iostream>
using namespace std;
int printSum(int n){
    if(n == 1) return 1;
    return n+printSum(n-1);
}
int main(){
    cout<<printSum(100);
    return 0;
}