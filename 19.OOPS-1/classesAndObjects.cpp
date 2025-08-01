#include<iostream>
using namespace std;

class Student{
    string name;
    float cgpa;
    void perdentage(){
        cout<<(cgpa*10)<<"%\n";
    }
};
int main(){
    Student s1;   //s1 is object of class Student
    Student s2;    
    return 0;
}