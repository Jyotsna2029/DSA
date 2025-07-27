#include <iostream>
using namespace std;

void Print(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selectionSort(int *arr, int n){
    for (int i = 0; i < n; i++){
        int minIdx = i;
        for(int j = i+1; j< n; j++){
            if(arr[j] < arr[minIdx]) minIdx = j;  //ascending 
        }
        swap(arr[i], arr[minIdx]);
    }
}
int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
    Print(arr, n);
    return 0;
}