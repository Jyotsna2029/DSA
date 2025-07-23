#include<iostream>
using namespace std;
void binTodec(int binNum){
    int n = binNum;
    int decimal = 0;
    int twoPower = 1;
    while(n > 0) {
        int last_digit = n%10;
        decimal += last_digit*twoPower;
        twoPower = twoPower * 2;
        n = n/10;
    }

    cout<<decimal<<endl;
}
int main(){
    binTodec(10110);
    return 0;

}