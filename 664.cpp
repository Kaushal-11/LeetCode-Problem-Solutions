#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n;
    vector<vector<int>> dp;
    int solve(int l, int r, string &s){
        if(l == r)
            return 1;
        if(l > r)
            return 0;

        if(dp[l][r] != -1)
            return dp[l][r];

        int i = l+1;
        while(i <= r && s[i] == s[l])
            i++;
        
        if(i == r+1)
            return 1;

        int app1 = 1 + solve(i, r, s);
        int app2 = INT_MAX;
        for (int j = i; j <= r; j++)
        {
            if(s[j] == s[l]){
                int ans = solve(i, j-1, s) + solve(j, r, s);
                app2 = min(app2, ans);
            }
        }
        return dp[l][r] = min(app2, app1);
    }

    int strangePrinter(string s) {
        int n = s.length();
        dp.resize(n+1, vector<int>(n+1, -1));
        return solve(0, n-1, s);
    }
};

int main() {
    Solution s;
    string st = "aba";
    cout<<s.strangePrinter(st);
    return 0;
}
