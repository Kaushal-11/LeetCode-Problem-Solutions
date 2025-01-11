#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();
        vector<vector<char>> ans(n, vector<char>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                ans[i][j] = box[m-j-1][i];
            }            
        }

        for (int j = 0; j < m; j++){
            int lowRow = n-1;
            for (int i = n-1; i >= 0; i--){
                if(ans[i][j] == '#'){
                    ans[i][j] = '.';
                    ans[lowRow][j] = '#';
                    lowRow--;
                }
                if(ans[i][j] == '*')
                    lowRow = i-1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<char>> box = {{'#','.','*','.'},{'#','#','*','.'}};
    vector<vector<char>> ans = s.rotateTheBox(box);
    for(auto x : ans) {
        for(char c : x) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}
