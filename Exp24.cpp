#include <bits/stdc++.h>
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

int main() {
    BinaryTree tree;

    // Creating binary tree
    tree.root = new BNode(1);
    tree.root->left = new BNode(2);
    tree.root->right = new BNode(3);
    tree.root->left->left = new BNode(4);
    tree.root->left->right = new BNode(5);

    cout << "Level order traversal of binary tree is - \n";

    if (!tree.root)
        return 0;

    queue<BNode*> q;
    q.push(tree.root);

    while (!q.empty()) {
        BNode* t = q.front();
        q.pop();

        cout << t->data << " ";

        if (t->left)
            q.push(t->left);
        if (t->right)
            q.push(t->right);
    }

    cout << endl;
    return 0;
}
