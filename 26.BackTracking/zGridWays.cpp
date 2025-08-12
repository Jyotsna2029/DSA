#include<iostream>
#include<string>
#include<vector>
using namespace std;
int gridWays(int r, int c, int n, int m){
    if(r == n-1 && c == m-1){//base case
        return 1; 
    }

    // agar end ho gya row ya colm ka
    if(r >= n || c >= m) return 0;

    // right
    int val1 = gridWays(r, c+1, n, m);
    // down
    int val2 = gridWays(r+1, c, n, m);

    return val1+val2;
}
int main(){
    cout<<gridWays(0,0,3,3);
    return 0;
}