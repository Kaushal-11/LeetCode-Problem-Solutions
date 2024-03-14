#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin() , points.end());
        int arrows = 0, i = 0;
        while(i<points.size())
        {
           int last = points[i][1];
           arrows++;
           i++;
           while(i<points.size() && points[i][0]<= last)
           last = min(points[i++][1],last);
        }
        return arrows;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> points = {{3,7},{6,9},{10,18}};
    cout<<s.findMinArrowShots(points)<<endl;   
    return 0;
}