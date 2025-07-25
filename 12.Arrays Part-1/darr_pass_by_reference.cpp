#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;

    cout << ptr << "address of int a" << endl;

    int arr[] = {2, 5, 1, 9};

    cout << arr << "address of int arr" << endl;
    cout << *arr << "dereference value of first element of arr" << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;

    return 0;
}
