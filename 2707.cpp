#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minExtraChar(string s, vector<string> &dictionary)
    {
        unordered_set<string> temp;
        for (auto it : dictionary)
        {
            temp.insert(it);
        }

        int n = s.length();
        vector<int> v(n + 1, 0);

        for (int index = n - 1; index >= 0; index--)
        {
            int mini = INT_MAX;
            string current = "";
            for (int i = index; i < n; i++)
            {
                int currEx = 0;
                current += s[i];
                if (temp.find(current) == temp.end())
                {
                    currEx = current.length();
                }
                mini = min(mini, currEx + v[i+1]);
            }
            v[index] = mini;
        }
    
        return v[0];
    }
};

int main()
{
    string s = "sayhelloworld"; 
    vector<string> dictionary = {"hello","world"};
    Solution s1;
    cout<<s1.minExtraChar(s,dictionary);
    
    return 0;
}