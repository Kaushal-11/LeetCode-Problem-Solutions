#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int ans = 0;
        for (int i = 0; i < points.size()-1; i++)
        {
            int x1 = points[i][0];
            int x2 = points[i+1][0];

            if(x1 == x2) continue;

            ans = max(ans, x2 - x1);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> points = {{8,7},{9,9},{7,4},{9,7}};
    cout << s.maxWidthOfVerticalArea(points) << endl;
return 0;
}   