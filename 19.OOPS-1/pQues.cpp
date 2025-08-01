#include<iostream>
#include<string>
using namespace std;

class User{
    private:
    int id;
    string password;
    public:
    string username;
    // constructor
    User(int id){
        this->id = id;
    }
    // setter
    void setPassword(string passVal){
        password = passVal;
    }
    // getter
    string getPassword(){
        return password;
    }
};
int main(){
    User u1(101);
    u1.username = "riya";
    u1.setPassword("abc");
    cout<<"username: "<<u1.username<<endl;
    cout<<"password: "<<u1.getPassword()<<endl;

    return 0;
}