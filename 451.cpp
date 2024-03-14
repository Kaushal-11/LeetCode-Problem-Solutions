#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static bool comp(pair<char, int> &a, pair<char, int> &b)
    {
        return a.second > b.second;
    }

    string frequencySort(string s)
    {
        unordered_map<char, int> mp;
        string ans = "";
        for (char &c : s)
            mp[c]++;
        
        vector<pair<char, int>> v;
        for (auto it : mp)
        {
            v.push_back(it);
        }

        sort(v.begin(), v.end(), comp);
        for (int i = 0; i < v.size(); i++)
        {
            int temp = v[i].second;
            while (temp--)
            {
                ans += v[i].first;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string st = "Aabb";
    cout << s.frequencySort(st);
    return 0;
}