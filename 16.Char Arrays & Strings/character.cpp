#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char ch1 = 'z';
    // "abcdefghijklmnopqrstuvwxyz";
    int position = ch1 -'a';
    cout<<position<<endl;
    char work[5] = {'c','o','d','e','\0'};
    cout<<strlen(work)<<endl;
    return 0;
}