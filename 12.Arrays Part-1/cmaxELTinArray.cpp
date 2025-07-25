#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,12,9};
    int len = sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int i = 0; i<len; i++){
        if(arr[i] > max) max = arr[i];
    }
    cout<<max;
    return 0;
}
