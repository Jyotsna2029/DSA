#include<iostream>
#include <string>
using namespace std;
int main(){
    string str = "hello";
    cout<<str<<endl;
    str = "yellow";
    cout<<str<<endl;

    string s ;
    getline(cin, s, '$');
    cout<<s<<endl;
    return 0;
}