#include<iostream>
using namespace std;
void checkOddEven(int n){
    if(!(n & 1)){
        cout<<"number "<<n<<" is odd."; 
    }
    else {
        cout<<"number "<<n<<" is odd."; 
    }
    cout<<endl;
}
int main(){
    int n = 5;
    int m = 20;
    checkOddEven(n);
    checkOddEven(m);
    return 0;
}