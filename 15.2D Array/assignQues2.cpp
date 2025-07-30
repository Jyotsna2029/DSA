#include<iostream>
using namespace std;
int main(){
    int nums[3][3]={{1,4,9},{11,4,3},{2,2,3}};
    int m = 3; //cols
    int sumof2ndRow = 0;
    for(int i = 0; i<m; i++){
        sumof2ndRow += nums[1][i];
    }
    cout<<"The sum of 2nd row is: "<<sumof2ndRow<<"\n";
}