#include <iostream>
#include <vector>

# define MAX_SIZE 100


void _possibleParenthesis(int pos, int n, int open, int close)
{
    static char str[MAX_SIZE];

    if(close == n) {
        printf("%s\n", str);
        return;
    }

    if(open > close) {
        str[pos] = '}';
        _possibleParenthesis(pos+1, n, open, close+1);
    }

    if(open < n) {
        str[pos] = '{';
        _possibleParenthesis(pos+1, n, open+1, close);
    }
}

void possibleParenthesis(int n)
{
    if(n > 0) {
        _possibleParenthesis(0, n, 0, 0);
    }
}

