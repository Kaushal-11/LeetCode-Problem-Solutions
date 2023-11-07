#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> ans(n);
        for(int i = 0 ; i < n;i++){
            if(i==0)
                ans[i]=pref[i];
            else
            ans[i] = pref[i]^pref[i-1];
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> arr = {0,1,2,3,4,5,6,7,8};
    vector<int> ans;
    ans = s.findArray(arr);
    for(auto x : ans){
        cout<<x<<" ";
    }
return 0;
}   