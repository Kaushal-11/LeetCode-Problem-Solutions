#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
                cnt1++;
            else
                cnt1 > 0 ? cnt1-- : cnt2++;
        }
        return cnt1 + cnt2;
    }
};

int main() {
    Solution s;
    string st = "(()))";
    cout<<s.minAddToMakeValid(st);
    return 0;
}
