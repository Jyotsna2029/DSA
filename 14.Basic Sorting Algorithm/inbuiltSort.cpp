#include <iostream>
#include<algorithm>
using namespace std;

void Print(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inbuiltSort(int *arr, int n){
    // ascending
    sort(arr+2, arr+n);  //5,4,1,2,3
    sort(arr, arr+n);  //1,2,3,4,5

    // adescending
    sort(arr, arr+n, greater<int>());
}
int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    inbuiltSort(arr, n);
    Print(arr, n);
    return 0;
}