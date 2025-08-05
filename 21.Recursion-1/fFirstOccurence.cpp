#include<iostream>
#include<vector>
using namespace std;

int firstOccur(vector<int> arr, int i, int target) {
    if(i == arr.size()) return -1;         // Base case: target not found
    if(arr[i] == target) return i;         // Base case: target found
    return firstOccur(arr, i + 1, target); // Recursive call
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    cout << firstOccur(arr, 0, 3); 
    return 0;
}