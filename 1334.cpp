#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> floyd(n, vector<int>(n, 1e9));
        for(auto it : edges){
            int u = it[0], v = it[1], wt = it[2];

            floyd[u][v] = floyd[v][u] = wt;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                for (int k = 0; k < n; k++){
                    if(j == k)
                        floyd[j][k] = 0;
                    else
                        floyd[j][k] = min(floyd[j][k], floyd[j][i] + floyd[i][k]);
                }                
            }            
        }

        int mini = INT_MAX;
        int ans = -1;

        for (int i = 0; i < n; i++){
            int cnt = 0;
            for (int j = 0; j < n; j++){
                if(floyd[i][j] <= distanceThreshold)
                    cnt++;
            }
            if(cnt < mini){
                mini = cnt;
                ans = i;
            }
            else if(cnt == mini){
                ans = i;
            }            
        }
        return ans;
    }
};

int main() {
    Solution s;
    int n = 4;
    vector<vector<int>> edges = {{0,1,3},{1,2,1},{1,3,4},{2,3,1}};
    int threshold = 4;
    cout<<s.findTheCity(n,edges,threshold);
return 0;
}   