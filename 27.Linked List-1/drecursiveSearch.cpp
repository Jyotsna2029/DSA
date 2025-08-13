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
    int helper(Node *temp, int key){

        // base case
        if(temp == NULL) return -1;

        if(temp -> data == key)return 0;
        int idx = helper(temp->next, key);
        if(idx == -1 ) return -1;
        else return idx+1;
    }
    int searchRec(int key){
        return helper(head, key);
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
    return 0;
}