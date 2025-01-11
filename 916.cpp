#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        for (int i = 0; i < words1.size(); i++)
        {
            bool flag = true;
            for (int j = 0; j < words2.size(); j++)
            {
                if(words1[i].find(words2[j]) == string::npos){
                    flag = false;
                    break;    
                }
            }
            if(flag)
                ans.push_back(words1[i]);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> words1 = {"amazon","apple","facebook","google","leetcode"}, words2 = {"e","o"};
    vector<string> ans = s.wordSubsets(words1, words2);
    for(auto x : ans) 
        cout<<x<<" ";
    return 0;
}
