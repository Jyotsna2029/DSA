#include<iostream>
using namespace std;
int main(){
    // for(int i = 1; i<=5; i++){
    //     cout<<i<<endl;
    // }
    // return 0;

    int n;
    cout<<"Enter your n: ";
    cin>>n;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += i;
    }

    // or
    // sum = n*(n+1)/2;

    cout<<"The sum is: "<<sum<<"\n";
    return 0;
}