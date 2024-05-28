#include<bits/stdc++.h>
using namespace std;

class Solution {
    int n , m;
    void MaxFarm(vector<vector<int>> &land, int i, int j, int &a, int &b){
        if(i < 0 || j < 0 || i >= n || j >= m || land[i][j] == 0)
            return;

        if(i + j > a + b){
            a = i;
            b = j;
        }

        land[i][j] = 0;
        MaxFarm(land, i-1, j,a, b);
        MaxFarm(land, i+1, j,a, b);
        MaxFarm(land, i, j+1,a, b);
        MaxFarm(land, i, j-1,a, b);
        return;
    }
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        n = land.size();
        m = land[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(land[i][j] == 1){
                    vector<int> farm;
                    int a = i, b = j;
                    farm.push_back(a);
                    farm.push_back(b);
                    MaxFarm(land,i,j,a,b);
                    farm.push_back(a);
                    farm.push_back(b);
                    ans.push_back(farm);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> land = {{1,0,0},{0,1,1},{0,1,1}};
    vector<vector<int>> ans = s.findFarmland(land);
    for(auto x : ans){
        for(int i : x){
            cout<<i<<" ";
        }
        cout<<endl;
    }
return 0;
}   