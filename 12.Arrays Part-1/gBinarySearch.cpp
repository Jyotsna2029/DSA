#include<iostream>
using namespace std;
int binarySearch(int *arr, int n, int key){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start +(end-start)/2;
        if (arr[mid] == key) return mid;
        else if(arr[mid] < key) start = mid+1;
        else end = mid-1;
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr,n, 100);
    return 0;
}