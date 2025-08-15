#include <iostream>
using namespace std;

// node class
class Node{
public:
    int data;
    Node *next;
    Node * prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class List{
public:
    Node *head;
    Node *tail;

    // if list empty
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node *newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode; 
        }else{
            newNode->next = head;
            head -> prev = newNode;
            head = newNode;
        }
    }
    
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"LL is empty";
            return;
        }
        Node *temp = head;
        head = head -> next;
        if(head != NULL){
            head ->prev = NULL;
        }
        temp -> next = NULL;
        delete temp;
    }

    void pop_back(){
        if (head == NULL) {
            cout << "LL is empty";
            return;
        }
        if (head->next == NULL) { // only one element
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL){ // O(n)
        cout << (temp->data) << " <=> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}


int main()
{
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    printList(ll.head);
    
    ll.pop_front();
    ll.pop_back();
    printList(ll.head);

    return 0;
}