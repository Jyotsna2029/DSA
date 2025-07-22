#include<iostream>
using namespace std;
int factorial(int n){
    if(n== 1) return 1;
    if(n == 0) return 1;
    return n*factorial(n-1);


}
int main(){
    int num1 = 5;
    cout<<"the factorial of "<<num1<<" is: "<<factorial(num1);
    return 0;
}