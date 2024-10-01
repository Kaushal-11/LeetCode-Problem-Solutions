#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> mp;

        for (auto x : arr) 
            mp[(x % k + k) % k]++;

        for (auto x : arr) {
            int rem = (x % k + k) % k;

            if (rem == 0) {
                if (mp[rem] % 2 == 1) 
                    return false;
            }
            else if (mp[rem] != mp[k - rem])
                return false;
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 7;
    cout<<s.canArrange(arr,k)<<endl;
    return 0;
}
