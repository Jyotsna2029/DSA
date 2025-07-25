#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int len = sizeof(arr)/sizeof(int);
    // input
    for(int i = 0; i<len; i++){
        cin>>arr[i];
    }

    // output
    for(int i = 0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}