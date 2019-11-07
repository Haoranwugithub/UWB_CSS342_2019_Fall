#pragma once

#include "Tree.h"
#include "TreeNode.h"
#include <vector>
#include "LinkedStack.h"

template<class T>
class BinaryTree :  public Tree<T> {
private:
    TreeNode<T>* root;

    int height(TreeNode<T>* root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + std::max(height(root->left), height(root->right));
    }

public:
    BinaryTree() : root(nullptr) {};

    BinaryTree(std::vector<T> &array) {
        // not implemented yet
    }

    BinaryTree(TreeNode<T>* root) : root(root) {
    }

    bool add(const T &) override {
        // not implemented yet
    }

    bool remove(const T &) override {
        // not implemented yet
    }


    int height() override {
        return height(root);
    }

    bool contains(T val) override {
        // not implemented yet
        return false;
    }

    void traverseInOrder() override {
        // not implemented yet
    }

    void traversePreOrder() override {
        // not implemented yet
    }
    void traversePostOrder() override {
        // not implemented yet
    }

    virtual ~BinaryTree() {
        LinkedStack<TreeNode<T>*> stack;

        if (root == nullptr) {
            return;
        }

        stack.push(root);

        while (!stack.isEmpty()) {
            TreeNode<T> *node = stack.peek();
            stack.pop();

            if (node->right != nullptr) {
                stack.push(node->right);
            }

            if (node->left != nullptr) {
                stack.push(node->left);
            }

            delete node;
        }
    }
};
