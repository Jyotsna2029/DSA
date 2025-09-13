#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int>nodes){
    idx++;

    if(nodes[idx] == -1) return NULL;

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

int height(Node* root){
    if(root == NULL) return 0;

    int leftHt;
    int rightHt;

    leftHt = height(root->left);
    rightHt = height(root->right);

    return max(leftHt, rightHt)+1;
}

int diameter(Node* root){
    if(root == NULL) return 0;
    
    int currDiam;
    int leftDiam;
    int rightDiam;

    currDiam = height(root->left) + height(root->right)+1;
    leftDiam = diameter(root->left);
    rightDiam = diameter(root->right);

    return max(max(leftDiam, rightDiam), currDiam);
}

int main(){
    vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);

    int diameterOfTree = diameter(root);
    cout<<"The diameter of the tree is: "<<diameterOfTree<<"\n";
    return 0;
}