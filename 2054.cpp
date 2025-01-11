#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        vector<array<int, 3>> times;
        int ans = 0, maxi = 0;

        for(auto x : events){
            times.push_back({x[0],1,x[2]});
            times.push_back({x[1]+1,0,x[2]});
        }
        sort(times.begin(), times.end());
        for(auto x : times){
            if(x[1])
                ans = max(ans, x[2]+maxi);
            else
                maxi = max(maxi, x[2]);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> events = {{1,3,2},{4,5,2},{2,4,3}};
    cout<<s.maxTwoEvents(events);
    return 0;
}
