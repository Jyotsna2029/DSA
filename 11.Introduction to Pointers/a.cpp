#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<&a<<endl;
    int *ptr = &a;
    cout<<ptr<<endl;
    int **pptr = &ptr;
    cout<<pptr<<endl;
    cout<<&ptr<<endl;
    cout<<*(pptr)<<endl;  // value of ptr using dereference pointer
    cout<<*(ptr)<<endl;   // value of a using dereference pointer
    return 0;
}