#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    for(int i = 1; i <= 10; i++){
        cout<<n<<" X "<<i<<" = "<<(n*i)<<"\n";
    }
    return 0;
}