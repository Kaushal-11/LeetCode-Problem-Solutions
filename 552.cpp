#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long dp[100004][3][4];
    long long md = 1e9 + 7;

    long long solve(int n, int a, int l) {
        if (a >= 2 || l == 3) 
            return 0;
        if (n == 0) 
            return 1;
        if (dp[n][a][l] != -1) 
            return dp[n][a][l];
        
        long long sol = solve(n - 1, a, 0) % md;
        sol = (sol + solve(n - 1, a + 1, 0) % md) % md;
        sol = (sol + solve(n - 1, a, l + 1) % md) % md;
        
        return dp[n][a][l] = sol % md;
    }

    int checkRecord(int n) {
        for (int i = 0; i < 100004; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 4; ++k) {
                    dp[i][j][k] = -1;
                }
            }
        }
        return solve(n, 0, 0);
    }
};

int main() {
    Solution s;
    cout<<s.checkRecord(2);
return 0;
}