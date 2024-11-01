#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());

        vector<int> facPos;
        for(auto x : factory){
            for (int i = 0; i < x[1]; i++){
                facPos.push_back(x[0]);
            }
        }
        
        int m = robot.size(), n = facPos.size();
        vector<vector<long long>> dp(m+1, vector<long long>(n+1, 0));
        for (int i = 0; i < m; i++){
            dp[i][n] = 1e12;
        }

        for (int i = m-1; i >= 0; i--){
            for (int j = n-1; j >= 0; j--){
                long long assign = abs(robot[i] - facPos[j]) + dp[i+1][j+1];
                long long skip = dp[i][j+1];
                dp[i][j] = min(assign, skip);
            }            
        }        
        return dp[0][0];
    }   
};

int main() {
    Solution s;
    vector<int> robot = {0,4,6};
    vector<vector<int>> factory = {{2,2},{6,2}};
    cout<<s.minimumTotalDistance(robot, factory)<<endl;
    return 0;
}
