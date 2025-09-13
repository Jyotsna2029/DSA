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

pair<int, int>diameter2(Node* root){
    if(root == NULL)return make_pair(0,0);

    pair<int, int>leftInfo = diameter2(root->left);  //LD, LH
    pair<int, int>rightInfo = diameter2(root->right); //RD, RH

    int currDiam  = leftInfo.second+ rightInfo.second + 1;
    int finalDiam = max(currDiam,max(leftInfo.first, rightInfo.first));
    int finalHt = max(leftInfo.second, rightInfo.second)+1;

    return make_pair(finalDiam,finalHt);
}

int main(){
    vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"The diameter of the tree is: "<<diameter2(root).first<<endl;
    return 0;
}