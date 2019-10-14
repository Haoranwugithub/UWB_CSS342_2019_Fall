#pragma once

template<class T>
class BagInterface {
public:
    virtual int getCount() const = 0;

    virtual bool isEmpty() const = 0;

    virtual bool isFull() const = 0;

    virtual bool add(T*) = 0;

    virtual bool remove(T*) = 0;

    virtual bool contains(T*) = 0;
};
