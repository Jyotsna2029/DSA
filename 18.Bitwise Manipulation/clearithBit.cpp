#include<iostream>
using namespace std;
int clearithbit(int n, int i){
    int bitMask =~(1<<i);
    return (n & bitMask);
    cout<<endl;
}
int main(){
    cout<<clearithbit(6,1);
    return 0;

}