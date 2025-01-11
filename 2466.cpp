#include<bits/stdc++.h>
using namespace std;

class Solution {
    int dp[100000];
    int MOD = 1000000007;

    int countWays(int &low, int &high, int &zero, int &one, int pos){
        if(pos > high)
            return 0;
        if(dp[pos] != -1)
            return dp[pos];

        int cnt = 0;
        if(pos >= low)
            cnt++;
        cnt += countWays(low, high, zero, one, pos+zero);
        cnt += countWays(low, high, zero, one, pos+one);

        return dp[pos] = cnt % MOD;
    }
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        memset(dp, -1, sizeof(dp));
        return countWays(low, high, zero, one, 0);
    }
};

int main() {
    Solution s;
    int l = 2, h = 3, z = 1, o = 2;
    cout<<s.countGoodStrings(l,h,z,o);
    return 0;
}
