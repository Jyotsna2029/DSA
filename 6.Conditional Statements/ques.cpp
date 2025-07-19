#include<iostream>
using namespace std;
int main(){
    long long income;
    cout<<"enter your annual income: ";
    cin>>income;
    if(income<500000){
        cout<<"You are in the 0% tax slab."<<endl;
    }
    else if(income>=500000 && income<=1000000){
        cout<<"You are in the 20% tax slab."<<endl;
    }
    else{
        cout<<"You are in the 30% tax slab."<<endl;
    }
    return 0;
}