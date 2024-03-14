#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool subBoxCheck(vector<vector<char>> v)
    {
        unordered_set<char> s;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                if (v[i][j] == '.')
                    continue;
                else if (s.find(v[i][j]) == s.end())
                    s.insert(v[i][j]);
                else
                    return false;
            }
        }
        return true;
    }

    bool columnCheck(vector<vector<char>> v, int n)
    {
        unordered_set<char> s;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i][n] == '.')
                continue;
            else if (s.find(v[i][n]) == s.end())
                s.insert(v[i][n]);
            else
                return false;
        }
        return true;
    }

    bool rowCheck(vector<char> v)
    {
        unordered_set<char> s;
        for (auto i : v)
        {
            if (i == '.')
                continue;
            else if (s.find(i) == s.end())
                s.insert(i);
            else
                return false;
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < board.size(); i++)
        {
            if (rowCheck(board[i]) == false || columnCheck(board, i) == false)
                return false;
        }

        int a = 0, b = 3, A = 0, B = 3;
        vector<char> p;
        vector<vector<char>> q;
    x:
        for (int i = a; i < b; i++)
        {
            for (int j = A; j < B; j++)
            {
                p.push_back(board[i][j]);
            }
            q.push_back(p);
            p.clear();
        }
        A += 3;
        B += 3;
        if (subBoxCheck(q) == false)
            return false;
        else if (B == 12 && b != 9)
        {
            a += 3;
            b += 3;
            A = 0;
            B = 3;
        }
        else if (B == 12 && b == 9)
            return true;
        q.clear();
        goto x;
    }
};

int main()
{
    Solution s;
    vector<vector<char>> board = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
};
    cout<<s.isValidSudoku(board);
    return 0;
}