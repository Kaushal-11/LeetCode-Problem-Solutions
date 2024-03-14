#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        map<int,int> mp;
        for (auto i : s)
        {
            mp[i - '0']++;
        }
        string ans = "";
        while (mp[1] > 1)
        {
            ans.push_back('1');
            mp[1]--;
        }
        while (mp[0] > 0)
        {
            ans.push_back('0');
            mp[0]--;
        }
        ans.push_back('1');
        return ans;
    }
};

int main()
{
    Solution s;
    string str = "1000";
    cout<<s.maximumOddBinaryNumber(str);
    return 0;
}