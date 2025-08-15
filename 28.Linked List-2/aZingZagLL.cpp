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
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL){ // O(n)
        cout << (temp->data) << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

Node* splitAtMid(Node* head){
    Node *slow = head;
    Node *fast = head;
    Node* prev = NULL;
    while(fast != NULL && fast->next !=NULL){
        prev = slow;
        slow = slow ->next;
        fast = fast ->next ->next;
    }
    // split 
    if(prev != NULL){  
        prev -> next = NULL;
    }
    return slow; //rightHead
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next =NULL;
    while(curr != NULL){
        next = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* zigZagLL(Node* head){
    Node* rightHead = splitAtMid(head);
    Node *rightHeadRev = reverse(rightHead);

    // alternate merging 1st head = head and 2nd head = rightHeadRev
    Node* left = head;
    Node* right = rightHeadRev;
    Node *tail = NULL;

    while( left != NULL && right != NULL){

        Node* nextLeft = left -> next;
        Node* nextRight = right -> next;

        left -> next = right;
        right -> next = nextLeft;

        tail = right;
        
        left = nextLeft;
        right = nextRight;
    }
    if(right != NULL)  tail -> next = right;

    return head;
}



int main()
{
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    printList(ll.head);

    ll.head = zigZagLL(ll.head);
    printList(ll.head);

    return 0;
}