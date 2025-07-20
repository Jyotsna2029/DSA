#include<iostream>
using namespace std;
int main(){
    int num;
    do{
        cout<<"Enter your num: ";
        cin>>num;
        if(num%10 == 0) break;
        cout<<"you entered "<<num;
    }while(true);
    return 0;
}