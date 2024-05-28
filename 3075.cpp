#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long a = 0;
        int n = happiness.size();
        sort(happiness.begin(),happiness.end(),greater<int>());
        int i = 0;
        if(k==1)
        {
            a+=happiness[i];
            return a;
        }
        int s = 0;
        while(k>0){
            if(happiness[i]-s<=0)
                return a;
            a+= happiness[i]-s;
            i++;
            k--;
            s++;
        }
        return a;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3};
    int k =2;
    cout<<s.maximumHappinessSum(nums, k);
return 0;
}   