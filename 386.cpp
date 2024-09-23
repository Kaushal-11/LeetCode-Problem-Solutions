#include<bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(int curr, int& n, vector<int>& ans){
        if(curr > n)
            return;

        ans.push_back(curr);
        for (int i = 0; i <= 9; i++)
        {
            dfs(curr*10 + i, n, ans);
        }
        
    }
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for (int i = 1; i <= 9; i++)
        {
            dfs(i, n, ans);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> ans = s.lexicalOrder(10);
    for(int x : ans)
        cout<<x<<" ";
    return 0;
}
