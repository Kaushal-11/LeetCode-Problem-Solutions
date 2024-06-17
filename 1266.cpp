#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int cnt = 0;
        for (int i = 0; i < points.size()-1; i++){
            int x = abs(points[i+1][0] - points[i][0]);
            int y = abs(points[i+1][1] - points[i][1]);
            int mini = min(x,y);
            cnt += mini;
            mini = (x - mini) + (y - mini);
            cnt += mini;
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<vector<int>> points = {{1,1},{3,4},{-1,0}};
    cout<<s.minTimeToVisitAllPoints(points);
return 0;
}   