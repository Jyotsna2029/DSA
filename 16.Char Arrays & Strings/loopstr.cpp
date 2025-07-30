#include<iostream>
#include <string>
using namespace std;
int main(){
    string str = 'hello';
    for(int i  = 0; i <str.length(); i++){
        cout<<str[i]<<"-";
    }
    cout<<endl;
    string str1 = 'hello';
    for(char ch: str1){
        cout<<ch<<"= ";
    }
    cout<<endl;
    return 0;
}