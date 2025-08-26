#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;
Node *buildTree(vector<int> &nodes){
    idx++;
    if (nodes[idx] == -1){
        return NULL;
    }

    Node *currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}
int height(Node* root){

    if(root == NULL) return 0;

    int leftht;
    int rightht;

    leftht = height(root->left);
    rightht = height(root->right);
    
    int currHt = max(leftht, rightht);

    return currHt+1;

}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, 6, 7, -1, -1,-1,-1,-1, 3, -1,-1};
    Node *root = buildTree(nodes);

    cout<<"Height of the tree is: "<<height(root);
    return 0;
}