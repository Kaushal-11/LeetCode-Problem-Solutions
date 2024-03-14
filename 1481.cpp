#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {
        sort(arr.begin(), arr.end());
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        int n = mp.size();
        vector<pair<int, int>> temp(n);
        int j = 0;
        for (auto i : mp)
        {
            temp[j].first = i.second;
            temp[j].second = i.first;
            j++;
        }
        sort(temp.begin(), temp.end());

        j = 0;
        int ans = temp.size();
        while (k > 0)
        {
            while (temp[j].first > 0 && k > 0)
            {
                temp[j].first--;
                k--;
            }
            if (temp[j].first == 0)
            {
                j++;
                ans--;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> num = {4,3,1,1,3,3,2}; 
    int k = 3;
    cout<<s.findLeastNumOfUniqueInts(num,k);
    return 0;
}