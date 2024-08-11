#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int l = 0, r = n-1, top = 0, bottom = n-1;
        int num = 1;
        vector<vector<int>> ans(n, vector<int>(n, 0));

        while(l <= r && top <= bottom) {
            for (int i = l; i <= r; i++){
                ans[top][i] = num;
                num++;
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                ans[i][r] = num;
                num++;
            }
            r--;
            if(top <= bottom){
                for (int i = r; i >= l; i--)
                {
                    ans[bottom][i] = num;
                    num++;
                }
                bottom--;
            }
            if(l <= r){
                for (int i = bottom; i >= top; i--)
                {
                    ans[i][l] = num;
                    num++;
                }
                l++;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> ans = s.generateMatrix(3);
    for(auto it : ans){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
return 0;
}   