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
public:
    Node *head;
    Node *tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node *newNode = new Node(val); // this created is dyanmic but  // Node *newNode(val);  STATIC SO WE CAN'T USE THIS
        if (head == NULL){
            head = tail = newNode; // case1 ll is empty
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void pop_front(){
        if (head == NULL){
            cout << "LL is empty";
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
};

void printList(Node *head){
    Node *temp = head;
    while (temp != NULL){ // O(n)
        cout << (temp->data) << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void removeCycle(Node *head){
    // to detect cycle;
    Node *slow = head; 
    Node *fast = head;
    bool isCycle = false;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        // first update then check
        if(slow == fast){
            cout<<"cycle detected\n";
            isCycle = true;
            break;
        }
    }
    if(!isCycle){
        cout<<"cycle doesn't exist\n";
        return;
    }

    // again intialise slow with head
    slow  = head;
    // special case when slow == fast == head
    if(slow == fast){
        while(fast -> next != slow){
            fast = fast -> next;
        }
        fast->next = NULL; //remove cycle
    }else{
        Node *prev = fast;
        while(slow != fast){
            slow = slow->next; 
            prev = fast;
            fast = fast -> next;
        }
        prev->next = NULL; //remove cycle
    }

}

int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next = ll.head;  //to make it cyclic;
    removeCycle(ll.head);
    printList(ll.head);
    return 0;
}