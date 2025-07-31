#include<iostream>
using namespace std;
int getithBit(int n, int i){
    int bitMask = 1<<i;
    return (n | bitMask);
    cout<<endl;
}
int main(){
    cout<<getithBit(6,3);
    return 0;

}