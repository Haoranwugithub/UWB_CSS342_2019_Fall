* Check out the project using git tool. 

```bash
git clone https://github.com/pdgetrf/UWB_CSS342_2019_Fall.git
```

Here's what it looks like on Ubuntu Linux:

```console
pdu@pdu-VirtualBox:~/teaching$ git clone https://github.com/pdgetrf/UWB_CSS342_2019_Fall.git
Cloning into 'UWB_CSS342_2019_Fall'...
remote: Enumerating objects: 89, done.
remote: Counting objects: 100% (89/89), done.
remote: Compressing objects: 100% (78/78), done.
remote: Total 89 (delta 21), reused 47 (delta 6), pack-reused 0
Unpacking objects: 100% (89/89), done.

pdu@pdu-VirtualBox:~/teaching$ ls
UWB_CSS342_2019_Fall
pdu@pdu-VirtualBox:~/teaching$ cd UWB_CSS342_2019_Fall/class1/homework/
```

The homework is in **UWB_CSS342_2019_Fall/class1/homework/**. 

* Finish the following tasks:

1. Separate all tests into a separate file called **test.cpp**, this file should include the following functions:

```cpp
void testReverse();
void testSort();
void testAdd();
```

Modify *build.sh* to include **test.cpp**, and *build.sh* should still compile the project.

2. Complete the **add()** and **testAdd()**
```cpp
    // add an element to the end of the array
    virtual void add(T &val) = 0;
```

*add()* is already partially implemented from class. Finish this task based on what's already written.

3. Complete the **sort()** and **sort()**
```cpp
    // sort the container elements in ascending order
    // for example:
    //  input: [3, 1, 4, 5, 4, 2]
    //  output: [1, 2, 3, 4, 4, 5]
    virtual void sort() = 0;
```

4. Complete the **reverse()** and **reverse()**
```cpp
    // reverse the elements of the array backward
    // examples:
    //  input: [], output: []
    //  input: [2], output: [2]
    //  input: [1, 2, 1], output: [1, 2, 1]
    //  input: [1, 2, 3, 4, 4, 5], output: [5, 4, 4, 3, 2, 1]
    virtual void reverse() = 0;
```
