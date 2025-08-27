#include <iostream>
#include <queue>
#include <vector>
#include<map>
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

void topView(Node* root){
    queue<pair<Node*,int>>q;  //node, horizontaldistance
    map<int,int>m; //horizontal distance, data
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int>curr = q.front();
        q.pop();
        Node* currNode = curr.first;
        int currHD = curr.second;

        if(m.count(currHD) == 0) {  //HD doesn't exist in map
            m[currHD] = currNode->data;
        }

        // children
        if(currNode->left != NULL){
            pair<Node*,int>leftChild = make_pair(currNode->left,currHD-1);
            q.push(leftChild);
        }
        if(currNode->right != NULL){
            pair<Node*,int>rightChild = make_pair(currNode->right,currHD+1);
            q.push(rightChild);
        }
    }

    // print data
    for(auto it: m){
        cout<<it.second<<" ";
    }
    cout<<"\n";
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    topView(root);
    return 0;
}