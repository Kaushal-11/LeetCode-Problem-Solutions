#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans(l.size() , true);
        vector<int> temp;
        for(int i = 0; i < l.size(); i++){
            temp.clear();
            for(int j = l[i];j <= r[i];j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin() , temp.end());
            if(temp.size() > 1){
                int diff = temp[1] - temp[0];
                for(int k = 2; k < temp.size() ; k++){
                    if(temp[k] - temp[k-1] != diff){
                        ans[i] = false;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4,6,5,9,3,7};
    vector<int> l = {0,0,2};
    vector<int> r = {2,3,5};
    vector<bool> ans = s.checkArithmeticSubarrays(nums,l,r);
    for(auto x : ans){
        cout<<" "<<x;
    }
return 0;
}