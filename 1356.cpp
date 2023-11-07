#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        auto temp = [](int &a, int &b){
            int cnt_a = __builtin_popcount(a);
            int cnt_b = __builtin_popcount(b);
            if(cnt_a == cnt_b){
                return a < b;
            }

            return cnt_a<cnt_b;
        };
        sort(arr.begin(), arr.end(), temp);
        return arr;
    }
};

int main() {
    Solution s;
    vector<int> arr = {0,1,2,3,4,5,6,7,8};
    vector<int> ans;
    ans = s.sortByBits(arr);
    for(auto x : ans){
        cout<<x<<" ";
    }
return 0;
}   