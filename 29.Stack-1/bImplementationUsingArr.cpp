#include<iostream>
using namespace std;
// using array
class Stack{
    int *arr;
    int capacity;
    int topIdx;
public:
// constructor
    Stack(int size){
        capacity = size;
        arr = new int[capacity];
        topIdx = -1;//is empty
    }
// push
    void push(int val){
        if(topIdx == capacity-1){
            cout<<"stack overflow\n";
            return;
        }
        arr[++topIdx] = val;
    }
// pop
    void pop(){
        if(topIdx == -1){
            cout<<"stack underflow\n";
            return;
        }
        topIdx--;
    }
// top
    int top(){
        if(topIdx == -1){
            cout<<"Stack is empty\n";
            return -1;
        }
        return arr[topIdx];
    }
// empty
    bool isEmpty(){
        return topIdx == -1;
    }
// print stack
    void print() {
        if (topIdx == -1) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements (bottom -> top): ";
        for (int i = 0; i <= topIdx; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
// destructor
    ~Stack() {
        delete[] arr;
    }

};
int main(){
    Stack s(5);
    s.push(3);
    s.push(2);
    s.push(1);

    s.print();
    return 0;
}