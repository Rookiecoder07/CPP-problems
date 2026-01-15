#include <bits/stdc++.h>
using namespace std;

// 22. Binary tree traversals (in, pre, post)
struct BNode{ 
    int data; 
    BNode* left; 
    BNode* right; 
    BNode(int d):data(d),left(nullptr),right(nullptr){} };
class BinaryTree {
public:
    BNode* root;
    BinaryTree():root(nullptr){}
    void printInOrder(BNode* node){
        if(!node) return;
        printInOrder(node->left);
        cout<<node->data<<" ";
        printInOrder(node->right);
    }
    void printPreOrder(BNode* node){
        if(!node) return;
        cout<<node->data<<" ";
        printPreOrder(node->left);
        printPreOrder(node->right);
    }
    void printPostOrder(BNode* node){
        if(!node) return;
        printPostOrder(node->left);
        printPostOrder(node->right);
        cout<<node->data<<" ";
    }
};
int main(){
    BinaryTree tree;
    tree.root = new BNode(1);
    tree.root->left = new BNode(2);
    tree.root->right = new BNode(3);
    tree.root->left->left = new BNode(4);
    tree.root->left->right = new BNode(5);
    cout<<"In-order traversal:\n"; tree.printInOrder(tree.root); cout<<"\n";
    cout<<"Pre-order traversal:\n"; tree.printPreOrder(tree.root); cout<<"\n";
    cout<<"Post-order traversal:\n"; tree.printPostOrder(tree.root); cout<<"\n";
}

