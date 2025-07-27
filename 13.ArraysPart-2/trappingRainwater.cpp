#include<iostream>
#include<climits>
using namespace std;
int trappingRainwater(int height[], int n){
    if(n < 3) return 0;
    int leftMax[7] ;
    leftMax[0]  = height[0];

    // step1
    //left max
    for(int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i-1], height[i-1]);
    }

    //right max
    
    int rightMax[7];  //as in size of arr; or max 20000 in ques
    rightMax[n-1]= height[n-1];
    for(int i = n-2; i >= 0; i--){
        rightMax[i] = max(rightMax[i+1], height[i+1]); 
    }
    
    // step 2 min(leftmax, rightmax);
    int trappedWater = 0;
    for(int i = 0; i<n; i++){
        int currWater = min(leftMax[i], rightMax[i]) - height[i];
        if(currWater > 0) trappedWater += currWater;
    }
    return trappedWater;
}
int main(){
    int arr[] = {4,2,0,6,3,2,5};
    int n = sizeof(arr) / sizeof(int);
    cout<<trappingRainwater(arr,n);
    return 0;
}