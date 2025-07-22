#include<iostream>
using namespace std;
char afterchar(char alphabet){
    if(alphabet == 'z') return 'a';
    if(alphabet == 'Z') return 'A';
    return char(alphabet+1);
}
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    cout<<"The character after input is: "<<afterchar(ch);
    return 0;
}