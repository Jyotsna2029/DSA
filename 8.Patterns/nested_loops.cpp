#include<iostream>
using namespace std;
int main(){
    // time complexity is O(n^2)
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;      
}