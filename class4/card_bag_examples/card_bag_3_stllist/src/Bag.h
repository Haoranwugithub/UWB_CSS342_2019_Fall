#pragma once

#include "BagInterface.h"
#include <list>

template<class T>
class Bag : BagInterface<T> {
private:
    //static const int SIZE = 100;
    //T shapes[SIZE];
    std::list<T*> items;
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
            printf("address of the first element: %x, size: %ld\n", items.begin(), items.size());
        }
        return can_add;
    };

    bool remove(T *item) override {
        bool is_deleted = false;
        for (auto it = items.begin(); it != items.end(); it++) {
            if ((*it) == item) {
                items.erase(it);
                is_deleted = true;
            }
        }
        return is_deleted;
    };

    bool contains(T *item) override {
        for (auto it = items.begin(); it != items.end(); it++) {
            if (*it == item) {
                return true;
            }
        }
        return false;
    };
};
