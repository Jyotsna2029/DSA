#include<iostream>
using namespace std;
int main(){
    int marks[] = {99,78,62,54,88,94,95};
    cout<<marks[0]<<"\n";
    cout<<marks[6]<<"\n";
    int size = sizeof(marks)/sizeof(marks[0]);
    cout<<size;
    return 0;
}