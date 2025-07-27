#include <iostream>
#include <climits>
using namespace std;

void Print(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countSort(int *arr, int n){
    int freq[100000]; //range
    int minArr = INT_MAX;
    int maxArr = INT_MIN;
    for(int i = 0; i < n; i++){
        minArr = min(arr[i], minArr);
        maxArr = max(arr[i], maxArr);
        freq[arr[i]]++;
    }
    for(int i = minArr , j = 0 ; i <= maxArr; i++){
        while(freq[i]>0){ 
            arr[j] = i;
            j++;
            freq[i]--;
        }
    }

}
int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr) / sizeof(int);
    countSort(arr, n);
    Print(arr, n);
    return 0;
}