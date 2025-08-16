#include<iostream>
#include<vector>
using namespace std;

// stack using class template vector
template<class T>
class Stack{
    vector<T>vec;
public:
    
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty.\n";
            return;
        }
        vec.pop_back();
    }
    T top(){
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.size() == 0;
    }
};
int main(){
    Stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}