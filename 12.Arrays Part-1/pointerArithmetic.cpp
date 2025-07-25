#include<iostream>
using namespace std;
int main(){
    int marks[] = {99,78,62,54,88,94,95};
    int n = sizeof(marks)/sizeof(marks[0]);

    int *ptr1 =  marks;
    int *ptr2 = ptr1+5;

    cout<<ptr2<<endl;
    cout<<(ptr2 > ptr1)<<endl;

    cout<<(ptr1 != marks);
    return 0;
}