#include <iostream>
using namespace std;

// node class
class Node{
public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node *head;
    Node *tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val); //this created is dyanmic but  // Node *newNode(val);  STATIC SO WE CAN'T USE THIS
        if(head == NULL){
            head = tail = newNode;  //case1 ll is empty
        }
        else{
            newNode -> next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void printList(){
        Node* temp = head;
        while(temp != NULL){ //O(n)
            cout<<(temp->data) <<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL\n";
    }
    void insert(int val, int pos){
        // create new node;
        Node *newNode = new Node(val);
        // loop
        Node *temp = head; 
        for(int i = 0; i<pos-1; i++){
            if(temp == NULL){
                cout<<"position is invalid";
                return;
            }
            temp = temp->next;
        }
        // form connections
        newNode -> next = temp ->next;
        temp -> next = newNode;
    }

    void pop_front(){
        if(head == NULL){
            cout<<"LL is empty";
            return;
        }
        Node *temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    void pop_back(){
        Node *temp = head;
        while(temp ->next->next != NULL){
            temp = temp ->next;
        }
        temp ->next = NULL;
        delete tail;
        tail = temp;
    }
};


int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.insert(100,2);
    ll.pop_front();
    ll.printList();

    return 0;
}