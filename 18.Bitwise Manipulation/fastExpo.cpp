#include<iostream>
using namespace std;
void fastExponentiation(int num, int power){
    int ans  = 1;
    while(num > 0){
        // last binary digit
        int lastBit = power & 1;
        if(lastBit) ans *= num;

        num = num * num;
        // agli baar ki last bit
        power = power>>1;
    }
    cout<<ans<<endl;
}
int main(){
    fastExponentiation(4,4);  //3raise to power5;
    return 0;
}