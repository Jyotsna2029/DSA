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
    
    void printList(){
        Node* temp = head;
        while(temp != NULL){ //O(n)
            cout<<(temp->data) <<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL\n";
    }
    int sizeOfLL(){
        int sz = 0;
        Node *temp = head;
        while(temp != NULL){
            temp = temp->next;
            sz++;
        }
        return sz;
    }
    void removeNthfromEnd(int n){
        int size = sizeOfLL();
        Node *prev = head;
        for(int i = 1; i<(size-n);i++){
            prev = prev->next;
        }
        Node *toDel = prev->next;
        cout<<"going to delete: "<<toDel->data<<endl;
        prev->next = prev->next->next;
    }
};


int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    ll.removeNthfromEnd(2);
    ll.printList();
   

    return 0;
}