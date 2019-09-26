#include <iostream>

template<class T>
class container {
    virtual int count() const = 0;
    virtual void add(T &val) = 0;
};

template<class T>
class slimSet : public container<T> {
private:
    T * data;
    int capacity;
    int size;

public:
    slimSet(int capacity) : capacity(capacity), size(0) {
        data = new T[capacity];
    }

    virtual ~slimSet() {
        delete []data;
    }

    int count() const override {
        return size;
    }

    void add(T & val) override {
        /*
         * add val to data[]
         */
        if (size==capacity) {
            exit(0);
        }
        size++;

    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;

    // create an object of slimSet
    slimSet<int> * setA = new slimSet<int>(10);

    // add values to the set
    for (int i = 0; i< 5; i++) {
        setA->add(i);
    }

    // check the size of the set
    printf("size of the set is %d\n", setA->count());

    return 0;
}