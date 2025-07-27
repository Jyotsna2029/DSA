#include<iostream>
using namespace std;
void print(int arr[], int n){
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int *arr, int n){
    for(int i = 0; i < n; i++){
        bool isSort = false;
        for(int j = 0; j< n-1-i; j++){
            if(arr[j+1] > arr[j]) { //descending
                swap(arr[j], arr[j+1]);
                isSort = true;
            }
        }
        if(isSort == 0){
            return;
        }
    }
}
int main(){
    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);
    print(arr,n);
    return 0;
}