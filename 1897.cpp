#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int> mp;
        for(auto word : words) {
            for(auto c : word) {
                mp[c]++;
            }
        }

        for(auto temp : mp) {
            if(temp.second % words.size() != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution s;
    vector<string> words = {"abc","aabc","bc"};
    cout<<s.makeEqual(words);
return 0;
}   