#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int> dp(26); 
        int longest = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int curr =s[i] - 'a';
            int maxi = 0;
            for (int j = 0; j < 26; j++)
            {
                if(abs(curr - j) <= k) 
                    maxi = max(maxi, dp[j]);
            }
            dp[curr] = max(dp[curr], maxi+1);
            longest = max(longest, dp[curr]);
        }
        return longest;
    }
};

int main() {
    Solution s;
    string st = "abcd";
    int k = 3;
    cout<<s.longestIdealString(st,k);
return 0;
}   