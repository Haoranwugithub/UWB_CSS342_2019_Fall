#include "myarray.h"

void logTestPassed(char * testName) {
	if (testName == nullptr) return;
	printf("%s: PASSED\n", testName);
}

/*
 * test MyArray::add()
 */
void testAdd() {

	int testArraySize = 10;
    MyArray<int> arr(testArraySize);
    for (int i = 0; i<testArraySize; i++) {
        arr.add(i);
    }

    // check the size of the array
    if (arr.count() != testArraySize) {
        printf("testAdd failed with size: expected(%d), actual(%d)\n", testArraySize, arr.count());
		return;
    }

	// check the values added match
    for (int i = 0; i<testArraySize; i++) {
		if (arr[i] != i) {
			printf("testAdd failed with value: expected(%d), actual(%d)\n", i, arr[i]);
			return;
		}
    }

	// check add() can handle overflow
	try {
		for (int i = 0; i<5; i++) {
			arr.add(i);
		}
	} catch (const std::exception& e) {
		printf("testAdd failed with overflow %s\n", e.what());
		return;
	}
	if (arr.count() != testArraySize) {
        printf("testAdd failed: array size, expected(%d), actual(%d)\n", testArraySize, arr.count());
		return;
	}

	logTestPassed((char*)"testAdd");
}

/*
 * test MyArray::sort()
 */
void testSort() {
	int testArraySize = 10;
    MyArray<int> arr(testArraySize);

	// sort an empty array
	try {
		arr.sort();
	} catch (const std::exception& e) {
		printf("testSort failed with empty array %s\n", e.what());
		return;
	}

	// sort an array with one value
	arr.add(testArraySize);
	arr.sort();
	if (arr.count() != 1 || arr[0] != testArraySize) {
		printf("testSort failed with sorting array of size 1\n");
		return;
	}

	// sort an array with multiple values and duplicates 
	for (int i=testArraySize; i>1; i--) {
		arr.add(i);
	} // arr should be [10,10,9,8,7,6,5,4,3,2]

	arr.sort(); // arr should now be [2,3,4,5,6,7,8,9,10,10]

	if (arr.count() != testArraySize) {
		printf("testSort failed: changed array size, expected(%d), actual(%d)\n", 
				testArraySize, arr.count());
		return;
	}

	for (int i=0; i<testArraySize-1; i++) {
		if (arr[i] != (i+2)) {
			printf("testSort failed: expected(%d), actual(%d)\n", i+2, arr[i]);
			return;
		}
	}
	if (arr[testArraySize-1] != testArraySize) {
		printf("testSort failed: last value, expected(%d), actual(%d)\n", 
				testArraySize, arr[testArraySize-1]);
		return;
	}

	logTestPassed((char*)"testSort");
}

/* 
 * test MyArray::reverse()
 */
void testReverse() {
	int testArraySize = 10;
    MyArray<int> arr(testArraySize);

	// reverse an empty array
	try {
		arr.reverse();
	} catch (const std::exception& e) {
		printf("testReverse failed with empty array %s\n", e.what());
		return;
	}

	// reverse an array with odd number of elements
	int oddArraySize = 3;
	int oddArrayInput[] = {2, 3, 4}, oddArrayOutput[] = {4, 3, 2};
	MyArray<int> oddArray(oddArraySize);
	for (int i=0; i<oddArraySize; i++) {
		oddArray.add(oddArrayInput[i]);
	}
	
	oddArray.reverse();

	for (int i=0; i<oddArraySize; i++) {
		if (oddArray[i] != oddArrayOutput[i]) {
			printf("testReverse failed: odd array, expected(%d), actual(%d)\n", 
					oddArrayOutput[i], oddArray[i]);
			return;
		}
	}
	
	// reverse an array with even number of elements
	int evenArraySize = 4;
	int evenArrayInput[] = {3, 3, 4, 5}, evenArrayOutput[] = {5, 4, 3, 3};
	MyArray<int> evenArray(evenArraySize);
	for (int i=0; i<evenArraySize; i++) {
		evenArray.add(evenArrayInput[i]);
	}

	evenArray.reverse();

	for (int i=0; i<evenArraySize; i++) {
		if (evenArray[i] != evenArrayOutput[i]) {
			printf("testReverse failed: even array, expected(%d), actual(%d)\n", 
					evenArrayOutput[i], evenArray[i]);
			return;
		}
	}

	// verify reverse does not affect size
	if (oddArray.count() != oddArraySize) {
			printf("testReverse failed: odd array size changed, expected(%d), actual(%d)\n", 
					oddArray.count(), oddArraySize);
			return;
	}

	if (evenArray.count() != evenArraySize) {
			printf("testReverse failed: even array size changed, expected(%d), actual(%d)\n", 
					evenArray.count(), evenArraySize);
			return;
	}
	
	logTestPassed((char*)"testReverse");
}

/*
 * test MyArray::[]
 */
void testSubscriptOperator() {
    // create an object of MyArray
    MyArray<int> arr(10);

    for (int i = 0; i<5; i++) {
        arr[i] = i;
    }

    int testCount = 5, testPassed = 0;
    for (int i=0; i<testCount; i++) {
        if (arr[i]!=i) {
            break;
        } else {
            testPassed++;
        }
    }

    if (testPassed==testCount) {
        printf("testSubscriptOperator: PASSED\n");
    } else {
        printf("testSubscriptOperator: FAILED\n");
    }
}
