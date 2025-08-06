#include <iostream>
using namespace std;
int powerofX(int x, int n){
     if(n == 0) return 1;
    int half = powerofX(x, n / 2);
    if(n % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

int main()
{
    int x = 2;
    int n = 7;
    cout << powerofX(x,n);
    return 0;
}