#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        int p1 = 0, p2 = 0, p3 = 0;
        dp[0] = 1;

        for (int i = 1; i < n; i++)
        {
            int twoMultiple = dp[p1]*2;
            int threeMultiple = dp[p2]*3;
            int fiveMultiple = dp[p3]*5;

            dp[i] = min({twoMultiple, threeMultiple, fiveMultiple});
            if(dp[i] == twoMultiple)
                p1++;
            if(dp[i] == threeMultiple)
                p2++;
            if(dp[i] == fiveMultiple)
                p3++;
        }
        return dp[n-1];
    }
};

int main() {
    Solution s;
    cout<<s.nthUglyNumber(10);
    return 0;
}
