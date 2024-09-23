#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> num;

        for(int x : nums) {
            num.push_back(to_string(x));
        }

        sort(num.begin(), num.end(),
            [](string &a, string &b){ return a + b > b + a;});

        if(num[0] == "0")
            return "0";

        string ans;
        for(string &x : num) {
            ans += x;
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {10,2,3};
    cout<<s.largestNumber(nums)<<endl;
    return 0;
}
