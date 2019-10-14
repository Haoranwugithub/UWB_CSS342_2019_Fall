#pragma once

#include "BagInterface.h"
#include <vector>

template<class T>
class Bag : BagInterface<T> {
private:
    //static const int SIZE = 100;
    //T shapes[SIZE];
    std::vector<T*> items;
    int capacity;
public:
    Bag() = delete;

    ~Bag() {
        items.clear();
    }

    Bag(int capacity) : capacity(capacity) {
    };

    int getCount() const override {
        return items.size();
    }

    bool isEmpty() const override {
        return items.empty();
    }

    bool isFull() const override {
        return getCount() == capacity;

        // or the bag is never full
        // return false;
    }

    bool add(T *item) override {
        bool can_add = !isFull();
        if (can_add) {
            items.push_back(item);
            printf("address of the first element: %x, capacity: %ld\n", &(items[0]), items.capacity());

        }
        return can_add;
    };

    bool remove(T *item) override {
        bool is_deleted = false;
        for (int i = 0; i < getCount(); i++) {
            if (items[i] == item) {
                items.erase(items.begin() + i);
                is_deleted = true;
            }
        }
        return is_deleted;
    };

    bool contains(T *item) override {
        for (int i = 0; i < getCount(); i++) {
            if (items.at(i) == item) {
                return true;
            }
        }
        return false;
    };
};
