#pragma once

#include <iostream>
#include <stdlib.h> // memcpy

template<class T>
class Container {
    // return the capacity of the array
    virtual int maxLength() const = 0;

    // return the number of elements in the array
    virtual int count() const = 0;

    // add an element to the end of the array
    virtual void add(T &val) = 0;

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
		
		void swap(T & a, T & b ) {
			T temp = a; a = b; b = temp;
		}

    public:
        // constructor
        MyArray(int capacity) : capacity(capacity), size(0) {
            data = new T[capacity];
        }

		// copy constructor
		MyArray(const MyArray & array) : capacity(array.capacity), size(array.size) {
            data = new T[capacity];
			memcpy(data, array.data, array.size*sizeof(T)); 
		}

        // destructor
        virtual ~MyArray() {
            delete []data;
        }

		int maxLength() const override {
			return capacity;
		}

        int count() const override {
            return size;
        }

        T & operator [](int index) {
            return data[index];
        }

        void add(T & val) override {
            if (size==capacity) {
                return;
            }
			data[size] = val;
            size++;
        }

		// bubble sort
        void sort() override {
			for (int i = 0; i < size-1; i++) {  
				for (int j = 0; j < size-i-1; j++) { 
					if (data[j] > data[j+1]) { 
						swap(data[j], data[j+1]);  
					}
				}
			}
        }

		// reverse by swapping elements from both ends
		// no extra space is used
        void reverse() override {
			int begin = 0, end = size - 1;
			while (begin < end) {
				swap(data[begin], data[end]);
				begin++; 
				end--;
			}
        }
};
