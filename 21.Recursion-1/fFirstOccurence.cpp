#include<iostream>
#include<vector>
using namespace std;
int firstOccur(v, int n, int target){
    if(i == n) return -1;
    if(arr[i] == target) return i;
    return firstOccur(arr, i+1)
}
int main(){
    vector<int>arr = {1,2,3,3,3,4};

    cout<<firstOccur(arr, target);
    return 0;
}