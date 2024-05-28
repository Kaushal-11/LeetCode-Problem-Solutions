#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> mp1;
        map<char, char> mp2;
        int l1 = s.length();
        int l2 = t.length();
        if (l1 != l2)
            return false;
        for (int i = 0; i < l1; i++)
        {
            if (!mp1[s[i]] && !mp2[t[i]])
            {
                mp1[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }
            else
            {
                if (mp1[s[i]] != t[i] || mp2[t[i]] != s[i])
                    return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string s = "egg", t = "add"; 
    cout<<sol.isIsomorphic(s,t);
    return 0;
}