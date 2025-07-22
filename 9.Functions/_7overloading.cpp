#include<iostream>
using namespace std;
int sum(int a, int b){
    int sum = a*b;
    return sum;
}
double sum2(double a, double b){
    double sum = a*b;
    return sum;
}
int main(){
    int num1 = 5;
    int num2 = 12;
    cout<<"sum = "<<sum(num1, num2)<<endl;
    return 0;
}