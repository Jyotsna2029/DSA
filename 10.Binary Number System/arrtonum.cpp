#include<iostream>
using namespace std;
int main(){
    int arr[] = { 1,3,2,1};
    int n =4;
    int arrayNumber = 0;
    int tenPower = 1;
    for(int j = n-1; j>=0; j--){
        arrayNumber += arr[j]*tenPower;
        tenPower *= 10; 
    }
    cout<<arrayNumber;
}