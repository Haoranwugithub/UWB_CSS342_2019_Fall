// based on https://www.geeksforgeeks.org/ways-copy-vector-c/
// C++ code to demonstrate STL vector 

#include <vector>		// std:vector
#include <algorithm>    // std::sort

//using namespace std; 
  
int main() { 
    // Initializing vector with values 
	int arr[] = {32,71,12,45,26,80,53,33};
	std::vector<int> vect1(arr, arr+8);
  
    // Declaring new vector and copying 
    // element of old vector 
    // constructor method, Deep copy 
	std::vector<int> vect2(vect1); 
  
	printf("before sort\n");
    for (int i=0; i<vect1.size(); i++) {
		printf("vect1[%d] = %d\n", i, vect1[i]);
	}

	// sort the vector 
	std::sort(vect1.begin(), vect1.begin()+8);

	printf("\nvect1 after sort\n");
	for (int i=0; i<vect1.size(); i++) {
		printf("vect1[%d] = %d\n", i, vect1[i]);
	}
  
	// show vect2 is a full copy of vect1
	printf("\nvect2 after sort\n");
	for (int i=0; i<vect2.size(); i++) {
		printf("vect2[%d] = %d\n", i, vect2[i]);
	}
} 
