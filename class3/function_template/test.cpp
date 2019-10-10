#include <iostream>
#include <string>

// based on https://www.tutorialspoint.com/cplusplus/cpp_templates.htm

using namespace std;


template<typename T>
T Max(T a, T b) {
   return a < b ? b : a; 
}

int main () {
   int i = 39;
   int j = 20;
   cout << "Max(i, j): " << Max(i, j) << endl; 

   float f1 = 13.5; 
   float f2 = 20.7; 
   cout << "Max(f1, f2): " << Max(f1, f2) << endl; 

   //see this for string comparotor http://www.cplusplus.com/reference/string/string/operators/
   string s1 = "Hello"; 
   string s2 = "World"; 
   cout << "Max(s1, s2): " << Max(s1, s2) << endl; 

   return 0;
}
