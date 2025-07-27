#include <iostream>
using namespace std;

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void BubbleSort(int *nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            { // for ascending order    // swap  int temp = nums[j]; nums[j] = nums[j+1]; nums[j+1] = temp;
                swap(nums[j], nums[j + 1]);
                isSwap = true;
            }
        }
        // agar ek bhi swap nahi hua toh array is already sorted
        if (!isSwap)
        {
            return;
        }
    }
}
int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    BubbleSort(arr, n);
    Print(arr, n);
    return 0;
}