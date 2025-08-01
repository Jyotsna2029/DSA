#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int *mileage;
    Car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 12;
    }
    Car(Car &original){
        cout<<"copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage = new int ;   //deep copy 
        *mileage = *original.mileage;//deep copy
        // mileage = original.mileage;  //shallow copy
    }
};

int main(){
    Car c1("Maruti800", "white");

    Car c2(c1);
    cout<<"car name: "<<c2.name<<endl;
    cout<<"car color: "<<c2.color<<endl;
    cout<<"car mileage: "<<*c2.mileage<<endl;
    *c2.mileage = 10;
    cout<<"car mileage: "<<*c1.mileage<<endl;

    return 0;
}