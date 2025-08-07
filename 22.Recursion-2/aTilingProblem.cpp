#include<iostream>
using namespace std;
int tilingProb(int n){
    // base case;
    if(n==0 || n==1) return 1;
    // vertical
    int ans1 = tilingProb(n-1);
    // horizontal 
    int ans2 = tilingProb(n-2);

    return ans1+ans2;;
}
int main(){
    int n = 5;
    cout<<tilingProb(n)<<endl;
    return 0;
}