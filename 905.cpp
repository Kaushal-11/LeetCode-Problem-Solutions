#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> nums)
    {
        // for (int i = 0;; i++){
        //     for (int j = 0; j < nums.size(); j++){
        //         if (nums[j] % 2 == 0){
        //             swap(nums[i], nums[j]);
        //         }
        //     }
        //     return nums;
        // }

        int i = 0, j = 0;
        while(j < nums.size()){
            if(nums[j]%2==0){
                swap(nums[i],nums[j]);
                i++;
            }
            j++;
        }
        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> num = {1,3,2,6};
    vector<int> ans = s.sortArrayByParity(num);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}