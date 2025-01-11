#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> prefixSum;
    int maxi;
    int mem[20000][3];
    vector<int> ans;
public:
    int MaxSum(vector<int>& nums, int pos, int cnt, int& k){
        if (cnt == 3 || pos > nums.size()-k)
            return 0;
        if(mem[pos][cnt] != -1)
            return mem[pos][cnt];

        int next = MaxSum(nums, pos+1, cnt, k);
        int curr = MaxSum(nums, pos+k, cnt+1, k) + prefixSum[pos+k]-prefixSum[pos];

        return mem[pos][cnt] = max(next, curr);
    }
    void MaxSumPath(vector<int>& nums, int pos, int cnt,int k, vector<int>& path){
        if(cnt == 3 || pos>nums.size()-k)
            return;

        int next = MaxSum(nums, pos+1, cnt, k);
        int curr = MaxSum(nums, pos+k, cnt+1,k) + prefixSum[pos+k]-prefixSum[pos];

        if(curr >= next){
            path.push_back(pos);
            MaxSumPath(nums, pos+k, cnt+1, k ,path); 
        }
        else
            MaxSumPath(nums, pos+1, cnt, k, path);
    }

    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        memset(mem, -1, sizeof(mem));
        vector<int> path; 
        prefixSum = vector<int>(n+1, 0);
        for (int i = 0; i < n; i++)
            prefixSum[i+1] = prefixSum[i] + nums[i];
        
        maxi = MaxSum(nums, 0, 0, k);
        MaxSumPath(nums, 0, 0, k, path);
        return path;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,1,2,1,2};
    int k = 2;
    vector<int> path = s.maxSumOfThreeSubarrays(nums, k);
    for(int x : path) 
        cout<<x<<" ";
    return 0;
}
