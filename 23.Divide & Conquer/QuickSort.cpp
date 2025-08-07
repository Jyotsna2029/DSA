#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr, int si, int ei){
    int i  = si -1;
    int pivot = arr[ei];
    for(int j = si; j < ei; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);
    return i; //pivot index
}

void quickSort(vector<int>&arr, int si, int ei ){
    if(si >= ei)return;
    int pIdx = partition(arr, si, ei);
    quickSort(arr, si, pIdx-1);
    quickSort(arr, pIdx+1, ei);
}

void printArr(vector<int>&arr){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr = {6,3,7,5,2,4};
    quickSort(arr, 0, arr.size()-1);
    printArr(arr);
    return 0;
}