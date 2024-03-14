#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = candidates.size();
        vector<int> freq(31, 0);
        long long temp = 1;
        for (int i = 0; i < 24; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(candidates[j] & temp)
                    freq[i]++;
            }
            temp <<= 1;
        }
        int ans = 1;
        for (int i = 0; i < 31; i++)
        {
            ans = max(ans, freq[i]);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> c = {16,17,71,62,12,24,14};
    cout<<s.largestCombination(c);
return 0;
}   