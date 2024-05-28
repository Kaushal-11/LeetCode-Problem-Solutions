#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int leastInterval(vector<char> &tasks, int n)
    {
        unordered_map<char, int> mp;
        int maxi = 0, cnt = 0;
        for (auto x : tasks)
        {
            mp[x]++;
        }

        for (auto x : mp)
        {
            if (x.second > maxi)
                maxi = x.second;
        }

        for (auto x : mp)
        {
            if (x.second == maxi)
                cnt++;
        }

        int ans = ((maxi - 1) * (n + 1)) + cnt;
        int size = tasks.size();
        return max(ans, size);
    }
};

int main()
{
    Solution s;
    vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
    int n = 2;
    cout<<s.leastInterval(tasks, n);
    return 0;
}