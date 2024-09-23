#include<bits/stdc++.h>
using namespace std;

class Solution {
    void helper(vector<int> &pos, string st){
        int i = 0, j = 1;
        while(j < st.length()){
            if(st[i] == st[j]){
                i++;
                pos[j] = i;
                j++;
            }
            else{
                if(i == 0)
                    j++;
                else
                    i = pos[i-1];
            }
        }
    }

public:
    string shortestPalindrome(string s) {
        string temp = s;
        reverse(temp.begin(), temp.end());
        string t = s + '#' + temp;
        vector<int> pos(t.length(), 0);

        helper(pos, t);
        int i = pos[t.length() - 1];
        string t2 = s.substr(i);

        reverse(t2.begin(), t2.end());

        return t2+s;
    }
};

int main() {
    Solution s;
    string st = "aacecaaa";
    cout<<s.shortestPalindrome(st);
    return 0;
}
