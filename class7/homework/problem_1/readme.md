## Complete the parentheses project (20pt)

Use folder ```problem_1```.

In the class we have discussed the problem of outputing all valid parentheses of size N. The code we saw in class is [here](https://github.com/pdgetrf/UWB_CSS342_2019_Fall/tree/master/class7/possible_parentheses). This code is good for demo but it's not completed with proper tests. The task of this problem is to finish the project. 


### 1. (10pt) Rewrite the possibleParenthesis function with the following signature:

```c++
// n: size of the problem
// result: a list of string, each string represents a case of valid parentheses of size n
void possibleParenthesis(int n, std::list<std::string> & result)
```

*n* is the size of the problem and *result* is a list of strings where each string is a case of valid parentheses of size n.

For example
- when n = 1, *result* will consist of only 1 string: "{}"
- when n = 2, *result* will consist of 2 strings: '{}{}' and "{{}}", and order of these two strings in the list doesn't matter
- when n = 3, *result* will contain the following 5 strings:

"{}{}{}", 
"{}{{}}",
"{{}}{}",
"{{}{}}",
"{{{}}}"


### 2. (10pt) Write unit tests to verify your possibleParenthesis. You need to at least verify the cases of n being zero to four.
