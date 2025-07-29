#include<iostream>
using namespace std;
bool EltInMatrix(int matrix[][4], int n, int m, int target){
    // // brute force
    // for(int i = 0; i< n; i++){
    //     for(int j = 0; j<m; j++){
    //         if(matrix[i][j] == target){
    //             cout<<"The target is found at"<<"("<<i<<","<<j<<")";
    //         }
    //     }
    // }

    // binary search

    // staircase approach
    
    int i = 0, j = m-1;
    while(i<n && j<m){
        if(matrix[i][j] == target) {
            cout<<"The target is found at"<<"("<<i<<","<<j<<")";
            return true;
        }
        else if(matrix[i][j] < target) i++; //down
        else j--; //matrix[i][j] > target //left
    }
    cout<<"target not found"<<endl;
    return false;
}

int main(){
     int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8},
                        {9, 10, 11, 12},  {13, 14, 15, 16}};
    // int key = 15;
    // EltInMatrix(matrix, 4 ,4, key);
    cout<<matrix+12<<endl;
    cout<<(*(matrix+2));
    
    return 0;
}
