#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void print(list<int>ll){
    // to print the list we have to use iterator;
    list<int>::iterator itr;
    for(itr = ll.begin(); itr != ll.end(); itr++){
        cout<<(*itr)<<"->";
    }
    cout<<"NULL\n";
}
int main(){
    list<int>ll;
    // functions in ll;
    // 1
    ll.push_front(2);
    ll.push_front(1);
    // 2
    ll.push_back(3);
    ll.push_back(4);
    print(ll);
    cout<<"ll size is: "<<ll.size()<<endl;

    // front() and back() function
    cout<<"head = "<<ll.front()<<endl;
    cout<<"tail = "<<ll.back()<<"\n";

    // pop from front
    ll.pop_front();
    // pop from back
    ll.pop_back();

    print(ll);

    return 0;
}