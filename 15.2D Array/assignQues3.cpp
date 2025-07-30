#include<iostream>
using namespace std;
int main(){
    int nums[3][3]={{1,4,9},{11,4,3},{2,2,3}};
    int n= 3,m = 3; //cols
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<m; j++){
            swap(nums[i][j], nums[j][i]);
        }
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}