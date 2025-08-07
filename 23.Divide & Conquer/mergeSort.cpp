#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int>&arr, int si, int ei, int mid){
    int i = si;
    int j = mid+1;
    vector<int>temp;
    while(i<=mid && j<=ei){
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    // temp to arr
    for(int idx = si, x = 0; idx<=ei; idx++){
        arr[idx] = temp[x++];
    }
}


void mergeSort(vector<int>&arr, int si, int ei ){
    if(si>= ei) return;
    int mid = si+ (ei-si)/2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid+1, ei);
    merge(arr, si, ei, mid);
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
    mergeSort(arr, 0, arr.size()-1);
    printArr(arr);
    return 0;
}