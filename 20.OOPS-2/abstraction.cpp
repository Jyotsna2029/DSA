#include<iostream>
#include<string>
using namespace std;
class Shape{
    public:
    void virtual draw() = 0;  //pure virtual func or abstract func

};

class Circle:public Shape{
    public:
    void draw(){
        cout<<"draw circle\n";
    }
};

class Square:public Shape{
    public:
    void draw(){
        cout<<"draw Square\n";
    }
};

int main(){
    Circle c1;
    c1.draw();
    Square s1;
    s1.draw();
    return 0;
}  