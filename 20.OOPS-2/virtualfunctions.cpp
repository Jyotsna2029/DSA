#include<iostream>
#include<string>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"parent class show "<<endl;
    }
    virtual void hello(){
        cout<<"parent hello"<<endl;
    }
};
class Child:public Parent{
    public:
    void show(){
        cout<<"child class show "<<endl;
    }
    void hello(){
        cout<<"child hello"<<endl;

    }
};
int main(){
    Child child1;
    Parent *ptr;
    ptr =  &child1;  //run time binding
    ptr->hello(); //virtual functions
      
    return 0;

}