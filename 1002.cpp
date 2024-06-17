#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        map<char, int> mp;
        for(char c : words[0])
            mp[c]++;

        for (int i = 1; i < n; i++)
        {
            map<char, int> temp;
            for(char c : words[i])
                temp[c]++;
            for(auto it : mp)
                mp[it.first] = min(temp[it.first], it.second);
        }
        
        vector<string> ans;
        for(auto it : mp) {
            string s(1, it.first);
            while(it.second > 0){
                it.second--;
                ans.push_back(s);
            }
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<string> words = {"bella","label","roller"};
    vector<string> ans = s.commonChars(words);
    for(string s : ans) {
        cout<<s<<endl;
    }
return 0;
}   