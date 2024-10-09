#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mp;
        vector<int> temp(arr);
        sort(temp.begin(), temp.end());

        int rank = 1;
        for (int i = 0; i < temp.size(); i++)
        {
            if(i > 0 && temp[i] > temp[i - 1])
                rank++;
            mp[temp[i]] = rank;
        }
        
        for (int i = 0; i < temp.size(); i++)
        {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};

int main() {
    Solution s;
    vector<int> arr = {2,4,1,6};
    vector<int> res = s.arrayRankTransform(arr);
    for(int x : res)
        cout<<x<<" ";
    return 0;
}
