#include<iostream>
#include<vector>
#include<bits/stdc++.h> 
using namespace std;

int minAbsDiff(vector<int>&A, vector<int>&B){
    int n = A.size(); //== B.size()
    // 1- sort
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int minDiff = 0;
    for(int i = 0; i< n; i++){
        minDiff +=abs(A[i]-B[i]);
    }

    cout<<"Minimum Absolute difference is: "<<minDiff;
    return minDiff;
}

int main(){
    vector<int>A = {4,1,8,7};
    vector<int>B = {2,3,6,5};
    minAbsDiff(A,B);
    return 0;
}