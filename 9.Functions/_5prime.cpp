#include<iostream>
using namespace std;
bool prime(int n){
    if(n==1) return false;
    for(int i=2; i<n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

bool prime2(int n){
    if(n==1) return false;
    for(int i=2; i*i<n; i++){
        if(n%i == 0) return false;
    }
    return true;
}


int main(){
    int num1 = 12;
    prime(num1);
    cout << "Is " << num1 << " prime? " << (prime(num1) ? "Yes" : "No") << endl;
    int num2 = 13;
    prime2(num2);
    cout << "Is " << num2 << " prime? " << (prime2(num2) ? "Yes" : "No") << endl;
    return 0;
}