#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        map<int , int> mp;
        for(int x : nums1)
            mp[x]++;

        for (int i = 0; i < nums2.size(); i++){
            if(mp[nums1[i]] == nums2[i]){
                v.push_back(nums2[i]);
                mp[nums1[i]]--;
            }
        }
                        
        return v;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1,2,2,1}, nums2 = {2,2};
    vector<int> ans;
    ans = s.intersect(nums1, nums2);
    for(int x : ans)
        cout<<x<<" ";
return 0;
}