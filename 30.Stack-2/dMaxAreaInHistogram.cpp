#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int areaHistogram(vector<int>&heights){
    int n = heights.size();

    vector<int>nsl(n);
    vector<int>nsr(n);
    stack<int>s;
    // next smaller left;
    nsl[0]  = -1;
    s.push(0);
    for(int i = 1; i< n; i++){
        int curr = heights[i];
        while(!s.empty() && curr <= heights[s.top()]){
            s.pop();
        }
        if(s.empty()) nsl[i] = -1;
        else nsl[i] = s.top();
        s.push(i);
    }

    while(!s.empty()) s.pop(); //empty purana stack

    // next smaller right
    s.push(n-1);
    nsr[n-1] = n;
    for(int i = n-2; i>=0; i--){
        int curr = heights[i];
        while(!s.empty() && curr <= heights[s.top()]){
            s.pop();
        }
        if(s.empty()) nsr[i] = n; 
        else nsr[i] = s.top();
        s.push(i);
    }
    int maxArea = 0;
    for(int i = 0; i<n;i++){
        int height = heights[i];
        int width = (nsr[i] - nsl[i] - 1);
        int area = height * width;
        maxArea = max(area, maxArea);
    }
    return maxArea;
}
int main(){
    vector<int>heights = {2,1,5,6,2,3};
    cout<<"The maximum area is: "<<areaHistogram(heights);
    return 0;
}