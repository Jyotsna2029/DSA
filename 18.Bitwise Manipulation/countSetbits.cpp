#include<iostream>
using namespace std;
int countSetBits(int num){
    int count = 0;
    // last digit of num
    while(num>0){
        int lastDigit = (num&1);
        count += lastDigit;
        num = num>>1;
    }
    return count;
}
int main(){
    cout<<countSetBits(6);
    return 0;

}