#pragma once
#include <iostream> 

template <class T>
class Matrix {
private:
	int height;
	int width;

	T* data;

public:
	// constructor
	Matrix(int width, int height) {
		if (height<=0 || width<=0) {
			printf("invalid size matrix width=%d, height=%d\n", width, height);
		}
		this->height = height;
		this->width = width;
		data = new T[height * width];
	};
	
	~Matrix() {
		delete[]data;
	}

	int getHeight() {
		return height;
	}

	int getWidth() {
		return width;
	}

	T get(int x, int y) {
		if (x<0 || x>=width  || y<0 || y>=height) {
			printf("get(): invalid matrix location (%d, %d)\n", x, y);
		}
		return data[x * height + y];
	}

	void set(int x, int y, T val) {
		if (x<0 || x>=width  || y<0 || y>=height) {
			printf("set(): invalid matrix location (%d, %d)\n", x, y);
		}
		data[x * height + y] = val;
	}

	void Add(Matrix& theOtherMatrix) {
		// size match
		if (height != theOtherMatrix.getHeight() || width != theOtherMatrix.getWidth()) {
			printf("size don't don't match");
			return;
		}

		for (int i=0; i<height*width; i++) {
			data[i] += theOtherMatrix.data[i];
		}
	}
    
	bool operator!=(Matrix const & theOtherMatrix) {
		return !((*this)==(theOtherMatrix));
	}

	bool operator==(Matrix const & theOtherMatrix) {
		// size match
		if (height != theOtherMatrix.height || width != theOtherMatrix.width) {
			printf("size don't don't match");
			return false;
		}

		for (int i=0; i<height*width; i++) {
			if (data[i] != theOtherMatrix.data[i]) {
				return false;
			}
		}
		
		return true;
	};
};
