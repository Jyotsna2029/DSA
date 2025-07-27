#include<iostream>
using namespace std;
void printArr(char arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertionSort(char arr[], int n){
    for (int i = 1; i < n; i++){ //unsorted
        char curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev] < curr){  //sorted part check  //descending
            swap(arr[prev], arr[prev+1]); 
            prev--;
        }
    }
}
int main(){
    char ch[] = {'f','b','a','e','c','d'};
    int n = sizeof(ch)/sizeof(char);
    insertionSort(ch, n);
    printArr(ch,n);
    return 0;

}