#include<iostream>
using namespace std;
int main(){
    // arithemetic operators
    cout<<"binary artihmetic Operators"<<endl;
    int a = 3;
    int b = 5;
     cout<<"a + b = "<<a+b<<endl;
     cout<<"a - b = "<<a-b<<endl;
     cout<<"a * b = "<<a*b<<endl;
     cout<<"a / b = "<<a/b<<endl;
     cout<<"a % b = "<<a%b<<endl<<endl;;
     cout<<"Unary artihmetic Operators"<<endl;
     cout<<"++a = "<<++a<<endl; // pre-increment
     cout<<"a = "<<a<<endl; // value of a after pre-increment
     cout<<"a++ = "<<a++<<endl; // post-increment
     cout<<"a = "<<a<<endl;
     cout<<"--a = "<<--a<<endl; // pre-decrement
     cout<<"a = "<<a<<endl; // value of a after pre-decrement
     cout<<"a-- = "<<a--<<endl; // post-decrement
     cout<<"a = "<<a<<endl; // value of a after post-decrement
     


    //  Assignment Operators
    cout<<"Assignment Operators"<<endl;
    int x = 10;
    int y = 20;
    x += y; // x = x + y
    cout<<"x += y: "<<x<<endl; // x = 30
    x -= y; // x = x - y
    cout<<"x -= y: "<<x<<endl; // x = 10
    x *= y; // x = x * y
    cout<<"x *= y: "<<x<<endl; // x = 200
    x /= y; // x = x / y
    cout<<"x /= y: "<<x<<endl; // x = 10
    x %= y; // x = x % y
    cout<<"x %= y: "<<x<<endl; // x = 10
    x &= y; // x = x & y
    cout<<"x &= y: "<<x<<endl; // x = 0
    x |= y; // x = x | y
    cout<<"x |= y: "<<x<<endl; // x = 30
    x ^= y; // x = x ^ y
    cout<<"x ^= y: "<<x<<endl; // x = 10
    x <<= 2; // x = x << 2
    cout<<"x <<= 2: "<<x<<endl; // x = 40
    x >>= 2; // x = x >> 2
    cout<<"x >>= 2: "<<x<<endl; // x = 10


    // relational operators 
    cout<<"Relational Operators"<<endl;
    int m = 10;
    int n = 20;
    cout<<"m == n: "<<(m == n)<<endl; // false
    cout<<"m != n: "<<(m != n)<<endl; // true
    cout<<"m < n: "<<(m < n)<<endl; // true
    cout<<"m > n: "<<(m > n)<<endl; // false
    cout<<"m <= n: "<<(m <= n)<<endl; // true
    cout<<"m >= n: "<<(m >= n)<<endl; // false


    // logical operators
    cout<<"Logical Operators"<<endl;
    bool p = true;
    bool q = false;
    cout<<"p && q: "<<(p && q)<<endl; // false
    cout<<"p || q: "<<(p || q)<<endl; // true
    cout<<"!p: "<<(!p)<<endl; // false
    cout<<"!q: "<<(!q)<<endl; // true

    
    return 0;
}