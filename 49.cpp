#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for (string s : strs)
        {
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }
        for (auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = s.groupAnagrams(strs);
    for(auto it : ans){
        for(auto temp : it){
            cout<<temp<<" ";
        }
        cout<<endl;
    }
    return 0;
}