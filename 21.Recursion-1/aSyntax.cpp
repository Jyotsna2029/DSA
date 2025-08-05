#include<iostream>
using namespace std;
void func(int n){
    if(n>0){
    cout<<"function call..work\n";
    n--;
    }
    func(n);
}
int main(){
    int n = 5;
    func(n);
    return 0;
}