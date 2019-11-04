#include <iostream>
#include <vector>

void _possibleParenthesis(int pos, int n, int open, int close)
{
    static std::vector<char> str;

    if(close == n) {
        for (int i=0; i<str.size(); i++) {
            printf("%c ", str[i]);
        }
        printf("\n");
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

