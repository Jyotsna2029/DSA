#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    bool isPrime = true;
    // for(int i = 2; i< num; i++){
    //     if(num%i == 0){
    //         isPrime = false;
    //         break;
    //     }
    //     else continue;
    // }

    // optimized
    for(int i = 2; i< sqrt(num); i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime) cout<<"Number is Prime.";
    else cout<<"Number is non-prime.";
    return 0;
}