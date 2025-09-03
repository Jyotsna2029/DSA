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

int CountOfNodes(Node* root){

    if(root == NULL) return 0;

    int leftCount;
    int rightCount;

    leftCount = CountOfNodes(root->left);
    rightCount = CountOfNodes(root->right);
    
    int currCount = leftCount+rightCount;

    return currCount+1;

}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);

    cout<<"Number of the nodes in the tree is: "<<CountOfNodes(root);
    return 0;
}