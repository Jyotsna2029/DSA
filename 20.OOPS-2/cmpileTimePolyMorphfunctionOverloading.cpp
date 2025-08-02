#include<iostream>
#include<string>
using namespace std;
class Print{
    public:
    void show(int a){
        cout<<"int "<<a<<endl;
    }
    void show(string s){
        cout<<"string "<<s<<endl;
    }
};
int main(){
    Print obj1;
    obj1.show(25);
    obj1.show("Jyot");

    return 0;

}