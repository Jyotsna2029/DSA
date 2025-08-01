#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
    Car(string name, string color){
        this->name = name;
        this->color = color;
    }
    Car(Car &original){
        cout<<"copying original to new..\n";
        name = original.name;
        color = original.color;
    }
};

int main(){
    Car c1("Maruti800", "white");

    Car c2(c1);
    cout<<"car name: "<<c2.name<<endl;
    cout<<"car name: "<<c2.color<<endl;
    return 0;
}