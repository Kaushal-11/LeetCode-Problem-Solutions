#include<bits/stdc++.h>
using namespace std;

class Solution {
    void check(int j, int i, string &s, unordered_set<string> &vis, queue<string> &q) {
        if(i >= 0 && i < 6) {
            swap(s[j], s[i]);
            if(vis.find(s) == vis.end()) vis.insert(s), q.push(s);
            swap(s[j], s[i]);
        }
    }
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string s;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 3; j++)
                s += to_string(board[i][j]);
            
        unordered_set<string> st;
        st.insert(s);
        queue<string> q;
        q.push(s);
        int l = 0;

        while(q.size()){
            int n = q.size();
            while(n--){
                string str = q.front();
                q.pop();
                if(str == "123450")
                    return l;

                int idx = str.find("0");
                if(idx != 2) check(idx, idx + 1, str, st, q);
                if(idx != 3) check(idx, idx - 1, str, st, q);
                check(idx, idx + 3, str, st, q);
                check(idx, idx - 3, str, st, q);
            }
            l++;
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<vector<int>> board = {{1,2,3},{5,4,0}};
    cout<<s.slidingPuzzle(board);
    return 0;
}
