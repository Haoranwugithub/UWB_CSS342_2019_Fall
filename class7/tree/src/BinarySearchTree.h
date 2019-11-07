#pragma once

#include "Tree.h"
#include "TreeNode.h"
#include <vector>

template<class T>
class BinarySearchTree :  public Tree<T> {
private:
    TreeNode<T>* root;
public:
    BinarySearchTree() = delete;

    BinarySearchTree(std::vector<T> &array) {
        // not implemented yet
    }

    bool add(const T &) override {
        // not implemented yet
    };

    bool remove(const T &) override {
        // not implemented yet
    }

    int height() override {
        // not implemented yet
    }

    bool contains(T val) override {
        // not implemented yet
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

    virtual ~BinarySearchTree() {
        // not implemented yet
    };
};

