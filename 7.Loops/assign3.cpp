#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num: ";
    cin>>n;
    int original = n;
    int result = 0;
    while(n>0){
        int last_digit = n %10;
        result += (last_digit*last_digit*last_digit);
        n /= 10;
    }
    if(original == result) cout<<"Yes, the number "<<original<<" is an Armstrong number."<<endl;
    else cout<<"No, the number "<<original<<" is not an Armstrong number."<<endl;
    return 0;
}