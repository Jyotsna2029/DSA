#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    int salary;
    string subject;


};
class Students{
    public:
    int rollNum;
    float cgpa;

};

class TeachingAssitants : public Teacher, public Students{
    public:
    string name;
};

int main(){
    TeachingAssitants ta1;
    ta1.name = "Jyotsna";
    ta1.subject = "C++";
    ta1.cgpa = 8.5;
    cout<<ta1.name <<endl;
    cout<<ta1.subject <<endl;
    cout<<ta1.cgpa <<endl;
    return 0;

}