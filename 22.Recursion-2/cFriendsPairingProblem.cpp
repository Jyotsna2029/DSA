#include<iostream>
using namespace std;
int pairingFriends(int n){
    // base case;
    if(n == 0 || n == 1) return 1;
    if(n == 2) return 2;; 
    // single
    int ans1 = pairingFriends(n-1);
    // n-1 pairs 
    int ans2 = (n-1)*pairingFriends(n-2);

    return ans1+ans2;;
}
int main(){
    int n = 4;
    cout<<"ways: "<<pairingFriends(n)<<endl;
    return 0;
}