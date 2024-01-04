#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        create("", 0, 0, v, n);
        return v;
    }

    void create(string s, int open, int close, vector<string> &v, int n) {
        if(open < n){
            create(s+'(',open+1,close,v,n);
        }
        if(open > close){
            create(s+')',open,close+1,v,n);
        }
        if(open == close && open == n){
            v.push_back(s);
        }
    }
};

int main() {
    Solution s;
    vector<string> v = s.generateParenthesis(3);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
return 0;
}   