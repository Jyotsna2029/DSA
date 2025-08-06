#include<iostream>
#include<vector>
using namespace std;

int lastOccur(vector<int> arr, int i, int target) {
    if(i < 0) return -1;         // Base case: target not found
    if(arr[i] == target) return i;         // Base case: target found
    return lastOccur(arr, i - 1, target); // Recursive call
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    cout << lastOccur(arr, 5, 4);   //5 is last occurence
    return 0;
}