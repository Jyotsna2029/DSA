#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public:
// constructor
    Car(){
        cout<<"non-parameterised contructor\n";
    }
    Car(string name, string color){
        cout<<"Contructor is called, obejct being created..\n";
        this->name =  name;
        this->color =  color;

    }

    void start(){
        cout<<"car started..";
    }
    void stop(){
        cout<<"car stoped..";
    }
    // 
    string getName(){
        return name; //privatewala 
    }
    string getColor(){
        return color; //not of contructor
    }
};

int main(){
    Car c1;
    Car c2("Maruti800", "white");

    cout<<"car name: "<<c2.getName()<<endl;
    cout<<"car name: "<<c2.getColor()<<endl;
    return 0;
}