#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> countMap;
        vector<int> ans;


        for (int num : arr1) {
            countMap[num]++;
        }


        for (int num : arr2) {
            while (countMap[num] > 0) {
                ans.push_back(num);
                countMap[num]--;
            }
        }

        vector<int> remaining;
        for (auto it = countMap.begin(); it != countMap.end(); ++it) {
            while (it->second > 0) {
                remaining.push_back(it->first);
                it->second--;
            }
        }

        sort(remaining.begin(), remaining.end());
        ans.insert(ans.end(), remaining.begin(), remaining.end());

        return ans;
    }
};


int main() {
    Solution s;
    vector<int> v1 = {2,3,1,3,2,4,6,7,9,2,19}, v2 = {2,1,4,3,9,6};
    vector<int> ans = s.relativeSortArray(v1,v2);
    for(int x : ans)
        cout<<x<<" ";
return 0;
}   