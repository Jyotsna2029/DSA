#include<iostream>
using namespace std;

class Student{
private:
    int RollNo;
public:
    string name;
    float cgpa;
    void perdentage(){
        cout<<(cgpa*10)<<"%\n";   
    }
};
int main(){
    Student s1;   //s1 is object of class Student
    // s1.RollNo = "Jyotsna";   //private we can't access in main func
    // cout<<s1.RollNo<<endl;
    s1.name = "Jyotsna";
    cout<<s1.name<<endl;
    
    Student s2;    
    return 0;
}