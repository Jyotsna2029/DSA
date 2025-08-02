#include<iostream>
#include<string>
using namespace std;

void counter(){
    static int count = 0;
    count++;
    cout<<"count: "<<count<<endl;
}
class Example{
    public:
    static int x;
};
int Example::x = 0;
int main(){
    counter();
    counter();
    counter();
    Example eg1;
    cout<<eg1.x++<<endl;
    Example eg2;
    cout<<eg2.x++<<endl;
    Example eg3;
    cout<<eg3.x++<<endl;
    return 0;
}  