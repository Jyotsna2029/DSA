#include<iostream>
using namespace std;
void subArrayIndex(int n){
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            cout<<"("<<i<<","<<j<<")";
        }
        cout<<endl;
    }
}
void subArray(int arr[], int n){
    for(int start = 0; start<n; start++){
        for(int end = start; end<n; end++){
            for(int i = start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    subArrayIndex(5); //size in function only
    subArray(arr, 5);
}