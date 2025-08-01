#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
        string color;
        void eat(){
            cout<<"Eats\n";
        }
        void breathe(){
            cout<<"Breathes\n";
        }


};
class Mammals: public Animal{
    public:
    void blooded(){
        cout<<"warm blooded\n";
    }
};

class Fish : public Mammals{
    public:
    int fins;
    void swim(){
        cout<<"swims\n";
    }
};

int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.breathe();
    f1.blooded();
    return 0;
}