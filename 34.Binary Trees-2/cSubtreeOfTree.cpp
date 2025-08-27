#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        left = right = NULL;
    }
};

static int idx = -1;
TreeNode* buildTree(vector<int>nodes){
    idx++;

    if(nodes[idx] == -1) return NULL;

    TreeNode* currNode = new TreeNode(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

bool isIdentical(TreeNode* root1, TreeNode* root2){
    if(root1 == NULL && root2 == NULL) return true;
    if(root1 == NULL || root2 == NULL) return false;

    if(root1->val != root2->val) return false;
    
    return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}

bool isSubTree(TreeNode* root, TreeNode* subRoot){

    if(root == NULL && subRoot == NULL) return true;
    if(root == NULL || subRoot == NULL) return false;

    if(root->val == subRoot->val){
        //identical for subtree
        if(isIdentical(root, subRoot)){
            return true;
        };
    }
    bool isLeftSubtree = isSubTree(root->left, subRoot);
    if(!isLeftSubtree){
        return isSubTree(root->right, subRoot);
    }
    return true;
}

int main(){
    vector<int>nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    TreeNode* root = buildTree(nodes);

    TreeNode* subroot = new TreeNode(2);
    subroot->left = new TreeNode(4);
    // subroot->right = new Node(5);
    
    cout<< isSubTree(root, subroot)<<endl;
    return 0;
}  
  
  
  
  
  
  