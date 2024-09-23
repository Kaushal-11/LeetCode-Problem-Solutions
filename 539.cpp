#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int mini = INT_MAX;
        int n = timePoints.size();
        vector<int> minutes(n);
        for (int i = 0; i < n; i++)
        {            
            string s = timePoints[i];
            int h = stoi(s.substr(0,2));
            int m = stoi(s.substr(3));
            minutes[i] = h*60 + m;
        }

        sort(minutes.begin(), minutes.end());
        for (int i = 0; i < minutes.size()-1; i++)
        {
            mini = min(mini, minutes[i+1]-minutes[i]);
        }
        
        return min(mini, 24*60 - minutes[minutes.size()-1] + minutes[0]);
    }
};

int main() {
    Solution s;
    vector<string> timePoints = {"23:59","00:00"};
    cout<<s.findMinDifference(timePoints);
    return 0;
}
