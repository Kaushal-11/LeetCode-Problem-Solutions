#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxUniqueSplit(string s) {
        unordered_set<string> ans;
        return backtrack(s, 0, ans);
    }

    int backtrack(const string &s, int start, unordered_set<string> &ans){
        if(start == s.size())
            return 0;

        int maxi = 0;
        for (int i = start + 1; i <= s.size(); i++)
        {
            string temp = s.substr(start, i-start);
            if(ans.find(temp) == ans.end()){
                ans.insert(temp);
                maxi = max(maxi, 1 + backtrack(s, i, ans));
                ans.erase(temp);
            }
        }
        return maxi;
    }
};

int main() {
    Solution s;
    string st = "ababccc";
    cout<<s.maxUniqueSplit(st);
    return 0;
}
