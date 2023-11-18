#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countHomogenous(string s) {
        int cnt = 0 , ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(i > 0 && s[i-1]==s[i])
                cnt++;
            else
                cnt = 1;
            ans = (ans + cnt) % 1000000007;
        }
        return ans;   
    }
};

int main() {
    Solution s;
    cout<<s.countHomogenous("abbcccaa");
return 0;
}   