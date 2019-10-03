* Info:
    - Assigned: 10/03/2019
    - Due: **10/14/2019 Monday 11:59pm**
    - Submission via Canvas
    - Your code will be graded on my Ubuntu Linux.  **Before** submitting your work, make sure your code works on this platform especially if you code on another platform like Windows. Simple rule of judgement: If *Makefile* does not produce an executable (compiler warning is ok) for that problem, it's considered as **DNC(Does Not Compile)** for this problem. Starting from the next homework, you will loose **ALL** of the points for that problem if your code does not compile. 
    - Your work will be graded as following:
        - compiles: code should compile
        - correct: pass all tests, sufficient test cases
       
The homework is in **UWB_CSS342_2019_Fall/class2/homework/**. 

* Finish the following problems:

1. (15pt) use folder ```problem_1```.
    - (5pt) Convert your "build.sh" from your homework1 code to Makefile and it should compile your project correctly (use folder problem_1)
    - (5pt) Add a copy constructor to the MyArray class in your homework1. The signature should be 
        ```cpp
        MyArray(const MyArray & array);
        ```
        This constructor will copy all the content from the object named *array* to the calling object. 
    - (5pt) Add unit test(s) to verify the constructor from the last part works correctly. Write as many tests as you think is sufficient. Put your unit tests in your test.cpp file.
    

2. (10pt) Create Makefile for the virtual memory example (use folder ```problem_2```)
    - (5pt) Move Base, DerivedA and DerivedB in virtual_function_example.cpp to their own files called base.cpp, classA.cpp and classB.cpp
    - (5pt) Replace build.sh with a Makefile to compile this project.

3. (15pt) Use folder ```problem_3```.
    - (5pt) Write unit test(s) in test.cpp for ```T circular_card::area() ``` and ```T rectangular_card::area() ```
    - (5pt) Add a virtual function called ```perimeter()``` in the card class, and implement it for both circular_card and rectangular_card classes. perimeter() returns the length of the outline of a card. Similar to area(), perimeter() works differently in rectangular_card and circular_card.
    - (5pt) Write unit test(s) in test.cpp for the ```perimeter()`` you added in the last part to verify it's correct. 

4. (60pt) Design and implement a class that represent a matrix with specified operations. Use folder ```problem_4```
    - A matrix is a rectangular array of numberical values.
    -  (5pt) Your class should be able to handle flexible data types in the array (hint "use template class").
    -  (5pt) The matrix has member variables for its size, definied by width and height.
    -  (5pt) The matrix size is specified when creating an object of your matrix class, and matrix size is immutable after object creation. 
    -  (5pt) Member variables should be declared as "private" in class.
    -  (5pt) Inside the class, data can be stored either as a one-dimension array or two-dimension array.
    -  (15pt) Write an Add() member funtion to the matrix class. The signature is (supposed the class we design is called "MyMatrix")
        ```cpp
        void Add(MyMatrix & theOtherMatrix);
        ```
        This function adds the values of theOtherMatrix object to the calling matrix object following the rule of [matrix addition](https://en.wikipedia.org/wiki/Matrix_addition)
    -  (5pt) Put your matrix class into its own files (definition in .h, implementation in .cpp).
    -  (10pt) Add unit test(s) for the Add() function in a file called test.cpp
    -  (5pt) Add Makefile to compile your matrix project
