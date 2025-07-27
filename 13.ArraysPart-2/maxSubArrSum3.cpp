#include <iostream>
#include <climits>
using namespace std;
void maxSubArrSum(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int start = 0; start < n; start++)
    {
        currSum += arr[start];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
            currSum = 0;
    }
    cout << "maximum subarray sum is " << maxSum;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubArrSum(arr, n);
    return 0;
}