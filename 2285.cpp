#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> degree(n, 0);
        for(auto edge : roads){
            int u = edge[0], v = edge[1];
            degree[u]++;
            degree[v]++;
        }

        sort(degree.begin(), degree.end());
        int ans = 0, coef = 1;
        for(auto it : degree){
            ans += it*coef;
            coef++;
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> roads = {{0,1},{1,2},{2,3},{0,2},{1,3},{2,4}};
    int n = 5;
    cout<<s.maximumImportance(n,roads);
return 0;
}   