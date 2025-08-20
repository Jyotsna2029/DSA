#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void queueReversal(queue<int>&q){
    stack<int>s;
    int n = q.size();
    // push in stack
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    // pop elements from stack to queue
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

int main(){
    queue<int>q;
    for(int i = 1; i<=5; i++){
        q.push(i);
    }
    queueReversal(q);
    for(int i = 1; i<= 5; i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}