#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    string name;
    float cgpa;
public:
    void perdentage(){
        cout<<(cgpa*10)<<"%\n";   
    }

    // setters
    void setname(string nameVal){
        name = nameVal;
    }

    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }
    
    // getters
    string getname(){
        return name;
    }

    float getCgpa(){
        return cgpa ;
    }

};
int main(){
    Student s1;   //s1 is object of class Student 
    s1.setname("Jyotsna");
    s1.setCgpa(8.5);

    cout<<s1.getname()<<endl;
    cout<<s1.getCgpa()<<endl;
    return 0;
}