#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>deq;
    deq.push_front(2);
    deq.push_front(1);

    deq.push_front(3);
    deq.push_front(4);

    deq.pop_front();  //1 removed
    deq.pop_back();  // 4 removec
    // front element 2 - 3
    cout<<deq.front()<<" ";
    cout<<deq.back()<<" ";
    return 0;
}