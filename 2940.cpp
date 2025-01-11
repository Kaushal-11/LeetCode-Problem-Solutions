#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int searchMinIdx(int &h, vector<int> &st, vector<int>& heights){
        int start=0, end=st.size()-1, idx=-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(heights[st[mid]]>h) {
                idx=st[mid]; 
                start=mid+1;
            }
            else 
                end=mid-1;
        }
        return idx;
    }
public:
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
        int qlen = queries.size();
        vector<int> res(qlen);
        vector<vector<int>> newQueries(qlen);
        vector<int> st;

        for(int i=0; i<qlen; i++) {
            int alice=min(queries[i][0], queries[i][1]), bob=max(queries[i][0], queries[i][1]);
            newQueries[i] = {bob, alice, i};
        }
        sort(newQueries.begin(), newQueries.end());
        int j=heights.size()-1;
        for(int i=qlen-1; i>=0; i--){
            int alice = newQueries[i][1], bob = newQueries[i][0], idx=newQueries[i][2];
            while(j>bob){
                while(!st.empty() && heights[j] >= heights[st.back()]) st.pop_back();
                st.push_back(j--);
            }
            if (heights[bob] > heights[alice] || bob==alice) 
                res[idx] = bob;
            else 
                res[idx] = searchMinIdx(heights[alice], st, heights);
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> height = {5,3,8,2,6,1,4,6};
    vector<vector<int>> q = {{0,7},{3,5},{5,2},{3,0},{1,6}};
    vector<int> ans = s.leftmostBuildingQueries(height, q);
    for(int x : ans)
        cout<<x<<" ";
    return 0;
}
