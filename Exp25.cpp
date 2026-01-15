#include <bits/stdc++.h>
// #include <BNode.h>
// #include <BinaryTree.h>
using namespace std;

// Node structure
struct BNode {
    int data;
    BNode* left;
    BNode* right;

    BNode(int d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

// Binary Tree class
class BinaryTree {
public:
    BNode* root;

    BinaryTree() {
        root = nullptr;
    }
};

// 25. Depth First Traversal (DFS) of binary tree (preorder)
void depthFirstTraversalRec(BNode* node){
    if(!node) return;
    cout<<node->data<<" ";
    depthFirstTraversalRec(node->left);
    depthFirstTraversalRec(node->right);
}

int main(){
    BinaryTree tree;
    tree.root = new BNode(1);
    tree.root->left = new BNode(2);
    tree.root->right = new BNode(3);
    tree.root->left->left = new BNode(4);
    tree.root->left->right = new BNode(5);
    cout<<"Depth first traversal of binary tree is - \n";
    depthFirstTraversalRec(tree.root);
    cout<<"\n";
}

