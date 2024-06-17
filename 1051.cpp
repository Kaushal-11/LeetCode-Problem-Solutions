#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ex = heights;
        int n = heights.size();
        int cnt = 0;

        sort(ex.begin(), ex.end());
        for (int i = 0; i < n; i++)
            if(heights[i] != ex[i])
                cnt++;
        
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> heights = {5,1,2,3,4};
    cout<<s.heightChecker(heights)<<endl;
return 0;
}   