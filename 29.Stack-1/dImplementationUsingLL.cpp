#include<iostream>
#include<vector>
#include<list>
using namespace std;

// stack using ll
template<class T>
class Stack{
    list<T>ll;
public:
// push
    void push(T val){
        ll.push_front(val);
    }
// pop
    void pop(){
        ll.pop_front();
    }
// top
    T top(){
        return ll.front();
    }
// empty
    bool isEmpty(){
        return ll.size() == 0;
    }
};
int main(){
    Stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');

    while(!s.isEmpty()){
        cout<<s.top()<<" "; //c b a
        s.pop();
    }
    return 0;
}