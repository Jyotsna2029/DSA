#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subsetf(string str, string subset){
    int n = str.size();
    if(n == 0){
        cout<<subset<<endl;
        return;
    }
    // yes
    char ch = str[0];
    subsetf(str.substr(1,n-1), subset+ch);
    
    // no
    subsetf(str.substr(1,n-1), subset);
}

int main(){
    string str = "abc";
    string subset = "";
    subsetf(str, subset);
    return 0;
}