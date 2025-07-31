#include<iostream>
using namespace std;
int getithBit(int n, int i){
    int bitMask = 1<<i;
    if(!(n&bitMask)) return 0;
    else return 1;
    cout<<endl;
}
int main(){
    cout<<getithBit(6,2);
    return 0;

}