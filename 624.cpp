#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size();
        int mini = arrays[0].front();
        int maxi = arrays[0].back();
        int ans = INT_MIN;

        for(int i=1; i<n; i++)
        {
            ans = max({ans, abs(arrays[i].back() - mini), abs(arrays[i].front() - maxi)});
            mini = min(mini, arrays[i].front());
            maxi = max(maxi, arrays[i].back());
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> arrays = {{1,2,3},{4,5},{1,2,3}};
    cout<<s.maxDistance(arrays);
    return 0;
}
