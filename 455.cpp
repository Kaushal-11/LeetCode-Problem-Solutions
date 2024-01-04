#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt = 0;
        int i = 0, j = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while (i < g.size() && j < s.size()) {
            if (g[i] <= s[j]) {
                cnt++;
                i++;
            }
            j++;
        }
        return cnt;
    }
};

int main() {
    Solution sol;
    vector<int> g = {1,2,3};
    vector<int> s = {1,1};
    cout<<sol.findContentChildren(g, s)<<endl;
return 0;
}   