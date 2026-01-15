#include <bits/stdc++.h>
using namespace std;

// 23. BST (insert, delete, search)
struct BSTNode{ int data; BSTNode* left; BSTNode* right; BSTNode(int d):data(d),left(nullptr),right(nullptr){} };
class BST {
public:
    BSTNode* root;
    BST():root(nullptr){}
    BSTNode* insertRec(BSTNode* node,int key){
        if(!node) return new BSTNode(key);
        if(key < node->data) node->left = insertRec(node->left, key);
        else if(key > node->data) node->right = insertRec(node->right, key);
        return node;
    }
    void insert(int key){ root = insertRec(root, key); }
    int minValue(BSTNode* node){
        int mv = node->data;
        while(node->left){ mv = node->left->data; node = node->left; }
        return mv;
    }
    BSTNode* deleteRec(BSTNode* node,int key){
        if(!node) return node;
        if(key < node->data) node->left = deleteRec(node->left, key);
        else if(key > node->data) node->right = deleteRec(node->right, key);
        else{
            if(!node->left) { BSTNode* r = node->right; delete node; return r; }
            else if(!node->right) { BSTNode* l = node->left; delete node; return l; }
            node->data = minValue(node->right);
            node->right = deleteRec(node->right, node->data);
        }
        return node;
    }
    void remove(int key){ root = deleteRec(root, key); }
    bool searchRec(BSTNode* node,int key){
        if(!node) return false;
        if(node->data==key) return true;
        return key < node->data ? searchRec(node->left, key) : searchRec(node->right, key);
    }
    bool search(int key){ return searchRec(root, key); }
};

int main(){
    BST tree;
    tree.insert(50); tree.insert(30); tree.insert(20); tree.insert(40);
    tree.insert(70); tree.insert(60); tree.insert(80);
    tree.remove(20); cout<<"20 deleted from the BST.\n";
    tree.remove(30); cout<<"30 deleted from the BST.\n";
    int keyToSearch = 40;
    cout<<(tree.search(keyToSearch) ? "Element 40 found in the BST.\n" : "Element 40 not found in the BST.\n");
}


