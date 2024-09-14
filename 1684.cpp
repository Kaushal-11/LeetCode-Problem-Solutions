#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> v(26, false);
        for (int i = 0; i < allowed.size(); i++){
            v[allowed[i] - 'a'] = true;
        }

        int cnt = 0;
        for(string& s : words){
            bool flag = true;
            for (int i = 0; i < s.length(); i++)
            {
                if(!v[s[i] - 'a']){
                    flag = false;
                    break;
                }
            }            
            if(flag)
                cnt++;
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<string> words = {"ad","bd","aaab","baa","badab"};
    string st = "ab";
    cout<<s.countConsistentStrings(st, words);
    return 0;
}
