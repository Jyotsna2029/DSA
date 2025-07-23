#include<iostream>
using namespace std;
void decTobin(int Num){
    int n = Num;
    int binaryNum = 0;
    int tenPower = 1;
    while(n > 0) {
        int last_digit = n%2;
        binaryNum += last_digit*tenPower;
        tenPower = tenPower * 10;
        n = n/2;
    }
    cout<<binaryNum<<endl;
}
int main(){
    decTobin(50);
    return 0;

}