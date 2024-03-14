#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.size();
        char ans;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
        {   
            mp[s[i]]++;
            if(mp[s[i]] == 2){
                ans = s[i];
                break;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    string st = "abccbaacz";
    cout<<s.repeatedCharacter(st);
return 0;
}   