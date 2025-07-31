#include<iostream>
using namespace std;
int powerOf2(int n){
    int bitMask = n-1;
    return (!(n & bitMask));
    cout<<endl;
}
int main(){
    cout<<powerOf2(31);
    return 0;

}