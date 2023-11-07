#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1 , 0);
        for (int i = 1; i <= n; i++)
        {
            ans[i] = ans[i >> 1] + (i & 1);
        }
        return ans;
    }
};

int main() {
    // cout<<(6 >> 1);
    Solution s;
    vector<int> ans;
    int n = 5;
    ans = s.countBits(n);
    for(int x : ans){
        cout<<x<<" ";
    }
return 0;
}