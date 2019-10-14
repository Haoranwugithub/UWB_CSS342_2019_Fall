#pragma once

#include "BagInterface.h"

template<class T>
class Bag : BagInterface<T> {
private:
    //static const int SIZE = 100;
    //T shapes[SIZE];
    T** collection;
    int count;
    int capacity;
public:
    Bag() = delete;

    ~Bag() {
        delete[] collection;
    }

    explicit Bag(int capacity) : capacity(capacity), count(0) {
        collection = new T *[capacity];
    };

    int getCount() const override {
        return count;
    }

    bool isEmpty() const override {
        return count == 0;
    }

    bool isFull() const override {
        return count == capacity;
    }

    bool add(T* card) override {
        bool can_add = !isFull();
        if (can_add) {
            collection[count] = card;
            count++;
        }
        return can_add;
    };

    bool remove(T* card) override {
        bool is_deleted = false;
        for (int i = 0; i < count; i++) {
            if (collection[i] == card) {
                collection[i] = collection[count - 1];
                count--;
                is_deleted = true;
            }
        }

        return is_deleted;
    };

    bool contains(T* card) override {
        for (int i = 0; i < count; i++) {
            if (collection[i] == card) {
                return true;
            }
        }
        return false;
    };
};
