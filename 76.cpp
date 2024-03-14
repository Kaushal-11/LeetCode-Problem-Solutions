#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string minWindow(string s, string t)
    {
        int m = s.length();
        int n = t.length();
        if (n > m)
            return "";

        unordered_map<char, int> mp;

        for (auto it : t)
        {
            mp[it]++;
        }

        string ans = "";
        int i = 0, j = 0;
        int mpsize = mp.size();
        int slen = m + 1;
        while (j < m)
        {
            if (mp.find(s[j]) != mp.end())
            {
                mp[s[j]]--;
                if (mp[s[j]] == 0)
                    mpsize--;
            }

            if (mpsize > 0)
                j++;
            else if (mpsize == 0)
            {
                while (mp.find(s[i]) == mp.end() || mp[s[i]] < 0)
                {
                    if (mp.find(s[i]) != mp.end())
                        mp[s[i]]++;
                    i++;
                }

                if (slen > j - i + 1)
                {
                    slen = j - i + 1;
                    ans = s.substr(i, j - i + 1);
                }

                if (mp.find(s[i]) != mp.end())
                {
                    mp[s[i]]++;
                    if (mp[s[i]] == 1)
                        mpsize++;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};

int main()
{
    Solution st;
    string s = "AD", t = "ABC";
    cout<<st.minWindow(s,t);
    return 0;
}