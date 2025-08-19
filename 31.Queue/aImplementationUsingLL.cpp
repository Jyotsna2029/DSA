#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        head = tail = NULL;
    }
    void push(int data){
        Node* newNode = new Node(data);
        if(head == NULL){// first node
            head = tail = newNode;
        }
        else{ //push element at tail
            tail ->next = newNode;
            tail = newNode;
        }
    };
    void pop(){ //delete value at head;
        if(empty()){
            cout<<"Queue is Empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;

    };
    int front(){
        return head->data;
    };
    bool empty(){
        if(head == NULL) return true;
        else return false;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    // print queue
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}