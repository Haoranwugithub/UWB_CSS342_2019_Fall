#include "matrix.h"
#include <cstdlib>
#include <ctime>

void testAdd(); 
void testMatrixEqual(); 

int main() {
	// use current time as seed for random generator
	std::srand(std::time(nullptr)); 

	testMatrixEqual();

	testAdd();
}

template<typename T>
void createMatrix(T *& matrix, int width, int height) {
	if (width<=0 || height<=0) {
		printf("createMatrix: invalid size width %d, height %d\n", width, height);
		return;
	}

	matrix = new T[width*height];

	for (int i=0; i<width*height; i++) {
		// matrix is filled with random number within 100
		matrix[i] = (T)(std::rand()%100);	
	}
}

// m1 += m2, used as testing answers
template<typename T>
void addMatrix(T* m1, T* m2, int width, int height) {
	if (width<=0 || height<=0) {
		printf("addMatrix: invalid size width %d, height %d\n", width, height);
		return;
	}

	for (int i=0; i<width*height; i++) {
		m1[i] += m2[i];
	}
}

// initialize matrixObj with *data
template<typename T>
void initMatrix(Matrix<T> & matrixObj, T* data, int width, int height) {
	for (int i=0; i<width; i++) {
		for (int j=0; j<height; j++) {
			matrixObj.set(i, j, data[i*height+j]);
		}
	}
}

void testMatrixEqual() {
	double * m1 = nullptr;
	createMatrix<double>(m1, 2, 3);
	Matrix<double> mm1(2, 3);
	initMatrix<double>(mm1, m1, 2, 3);

	int passedTest = 0;
	passedTest += ((mm1==mm1) ? 1 : 0);

	double * m2 = nullptr;
	createMatrix<double>(m2, 2, 3);
	Matrix<double> mm2(2, 3);
	initMatrix<double>(mm2, m2, 2, 3);
	passedTest += ((mm1!=mm2) ? 1 : 0);

	delete m1;
	delete m2;

	if (passedTest != 2) {
		printf("testMatrixEqual: FAILED\n");
		return;
	}
	printf("testMatrixEqual: PASSED\n");
}


void testAdd() {
	int testSize = 10;
	for (int i=1; i<testSize; i++) {
		for (int j=1; j<testSize; j++) {

			// generate two matrix mm1 and mm2
			double * m1 = nullptr;
			createMatrix<double>(m1, i, j);
			Matrix<double> mm1(i, j);
			initMatrix<double>(mm1, m1, i, j);

			double * m2 = nullptr;
			createMatrix<double>(m2, i, j);
			Matrix<double> mm2(i, j);
			initMatrix<double>(mm2, m2, i, j);

			// mm1 += mm2
			mm1.Add(mm2);

			// generate and compare the mm1 with the answer
			addMatrix<double>(m1, m2, i, j);
			Matrix<double> answer(i, j);
			initMatrix<double>(answer, m1, i, j);

			delete m1;
			delete m2;

			if (mm1!=answer) {
				printf("testAdd: FAILED, width = %d, height = %d\n", i, j);
				return;
			}
		}
	}

	printf("testAdd: PASSED\n");
}
