#include<iostream>
using namespace std;

void reverseArr1(int arr[], int n){
    // with extra space 
    int copyArr[5];
    for(int i = 0; i < n ; i++){
        copyArr[i] = arr[i];
    }

    // now start with the end of the copy array and make the arr ith elt from start n-1-ith elt from endl;
    for(int i = 0; i < n; i++){
        arr[i] = copyArr[n-1-i];
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArr2(int *arr, int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[] = {5,4,3};
    int n = sizeof(arr)/sizeof(int);
    // reverseArr1(arr,n);
    reverseArr2(arr,n);
    return 0;
}