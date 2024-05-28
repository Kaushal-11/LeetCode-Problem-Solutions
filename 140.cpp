#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<string> solve(string s, int index, unordered_set<string> &wdict){
        vector<string> ans;

        if(index == s.length()){
            ans.push_back("");
            return ans;
        }

        for (int i = index + 1; i <= s.length(); i++)
        {
            string temp = s.substr(index, i - index);
            if(wdict.find(temp) != wdict.end()){
                vector<string> st = solve(s, i, wdict);
                for(string x : st){
                    ans.push_back(temp + (x.empty() ? "" : " ") + x);
                }
            }
        }
        return ans;
    }
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wdict(wordDict.begin(), wordDict.end());
        return solve(s, 0, wdict);
    }
};

int main() {
    Solution sl;
    vector<string> wordDict = {"cat","cats","and","sand","dog"};
    string s = "catsanddog";
    vector<string> ans = sl.wordBreak(s, wordDict);
    for(auto x : ans){
        cout<<x<<endl;
    }
return 0;
}   