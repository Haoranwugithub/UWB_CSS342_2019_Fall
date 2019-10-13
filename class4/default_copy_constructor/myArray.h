#include <iostream>
#include <ostream>
#include <string>
#include <stack>

using namespace std;

template<class T>
class Container {
    // return the number of elements in the array
    virtual int count() const = 0;

    // add an element to the end of the array
    virtual void add(const T &val) = 0;

    // sort the container elements in ascending order
    // for example:
    // 	input: [3, 1, 4, 5, 4, 2]
    // 	output: [1, 2, 3, 4, 4, 5]
    virtual void sort() = 0;

    // reverse the elements of the array backward
    // examples:
    // 	input: [], output: []
    // 	input: [2], output: [2]
    // 	input: [1, 2, 1], output: [1, 2, 1]
    // 	input: [1, 2, 3, 4, 4, 5], output: [5, 4, 4, 3, 2, 1]
    virtual void reverse() = 0;
};

template<class T>
class MyArray: public Container<T> {
    private:
        T * data;
        int capacity;
        int size;

        void swap(T *x, T *y)
        {
            T temp = *x;
            *x = *y;
            *y = temp;
        }

    public:
        // constructor
        MyArray(int capacity) : capacity(capacity), size(0) {
            data = new T[capacity];
        }

        // destructor
        virtual ~MyArray() {
            delete []data;
        }

        int count() const override {
            return size;
        }

        T & operator [](int index) {
            return data[index];
        }

        void add(const T & val) override {
            if (size==capacity) {
                return;
            }

            data[size] = val;

            size++;
        }

        void sort() override {
            int pivot = 0;
            int length = count();

            while(pivot < length)
            {
                for(int i = pivot; i < length; i++)
                {
                    if(data[pivot] > data[i])
                    {
                        swap(&data[pivot], &data[i]);
                    }
                }

                pivot++;
            }
        }

        // I took this idea from the discussion we had in class regarding
        // reverse algos.
        void reverse() override {
            stack<T> order;

            for(int i = 0; i < count(); i++)
            {
                order.push(data[i]);
            }

            for(int i = 0; i < count(); i++)
            {
                data[i] = order.top();
                order.pop();
            }
        }

        void print()
        {
            for(int i = 0; i < count(); i++){
                cout << data[i] << ", ";
            }
            cout << endl;
        }
};
