#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        vector<int> pre(n, 0), suff(n, 0);

        for (int i = 1; i < n; i++)
            pre[i] = pre[i-1] + (s[i - 1] == 'b');

        for (int i = n-2; i >= 0; i--)
            suff[i] = suff[i+1] + (s[i + 1] == 'a');
            
        int ans = min(pre[n-1], suff[0]);

        for (int i = 1; i < n; i++)
            ans = min(ans, pre[i]+suff[i]);
                
        return ans;
    }
};

int main() {
    Solution s;
    string st = "aababbab";
    cout<<s.minimumDeletions(st)<<endl;
return 0;
}   