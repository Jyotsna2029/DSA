#include<iostream>
using namespace std;
int product(int a, int b){
    int product = a*b;
    return product;
}
int main(){
    int num1 = 5;
    int num2 = 12;
    cout<<"product = "<<product(num1, num2)<<endl;
    return 0;
}