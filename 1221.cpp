#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt_l= 0 , cnt_r = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]== 'R')
                cnt_r++;
            else
                cnt_l++;
            if(cnt_l == cnt_r)
                ans++;
        }
        return ans;
    }
};

int main() {
    Solution s;
    string st = "RLRRLLRLRL";
    cout << s.balancedStringSplit(st) << endl;
return 0;
}   