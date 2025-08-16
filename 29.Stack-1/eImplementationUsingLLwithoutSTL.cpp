#include<iostream>
#include<vector>
using namespace std;

// our ll
template<class T>
class Node{
public:
    T data;
    Node* next;

    Node(T val){
        data = val;
        next = NULL;
    }
};

// stack using ll
template<class T>
class Stack{
    Node<T>* head;
public:
// constructor
    Stack(){
        head = NULL;
    }
// push
    void push(T val){
        // ll.push_front(val);
        Node<T>* newNode = new Node<T>(val);
        if(head == NULL){
            head = newNode;
        }else{
            newNode -> next = head;
            head = newNode;
        }
    }
// pop
    void pop(){
        // ll.pop_front();
        Node<T>* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
// top
    T top(){
        // return ll.front();
        return head -> data;
    }
// empty
    bool isEmpty(){
        return head == NULL;
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