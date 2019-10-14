#pragma once

#include "BagInterface.h"
#include <vector>

template<class T>
class Bag : BagInterface<T> {
private:
    //static const int SIZE = 100;
    //T shapes[SIZE];
    std::vector<T*> collection;
    int capacity;
public:
    Bag() = delete;

    ~Bag() {
        collection.clear();
    }

    Bag(int capacity) : capacity(capacity) {
    };

    int getCount() const override {
        return collection.size();
    }

    bool isEmpty() const override {
        return collection.empty();
    }

    bool isFull() const override {
        return getCount() == capacity;
    }

    bool add(T *item) override {
        bool can_add = !isFull();
        if (can_add) {
            collection.push_back(item);
        }
        return can_add;
    };

    bool remove(T *item) override {
        bool is_deleted = false;
        for (int i = 0; i < getCount(); i++) {
            if (collection.at(i) == item) {
                collection.erase(collection.begin() + i);
                is_deleted = true;
            }
        }
        return is_deleted;
    };

    bool contains(T *item) override {
        for (int i = 0; i < getCount(); i++) {
            if (collection.at(i) == item) {
                return true;
            }
        }
        return false;
    };
};
