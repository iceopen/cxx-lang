//
// Created by iceinto on 2023/11/2.
//

#ifndef CXX_LANG_BINARY_TREE_H
#define CXX_LANG_BINARY_TREE_H

class Node {

public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }

};

class BinaryTree {
public:
    Node *root;

    BinaryTree() {
        root = nullptr;
    }

    void insert(int val) {
        Node *newNode = new Node(val);
        if (root == nullptr) {
            root = newNode;
            return;
        }
        Node *cur = root;
        while (cur) {
            if (val < cur->data) {
                if (cur->left == nullptr) {
                    cur->left = newNode;
                    return;
                }
                cur = cur->left;
            } else {
                if (cur->right == nullptr) {
                    cur->right = newNode;
                    return;
                }
                cur = cur->right;
            }
        }
    }

    void inorderTraversal(Node *node) {
        if (node == nullptr) return;
        inorderTraversal(node->left);
        inorderTraversal(node->right);
    }
};


#endif //CXX_LANG_BINARY_TREE_H
