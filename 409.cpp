#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int cnt = 0;
        map<char, int> mp;
        bool flag = false;
        for(char c : s)
            mp[c]++;

        for(auto it : mp){
            if(it.second % 2 == 0)
                cnt += it.second;
            else{
                cnt += it.second - 1;
                flag = true;
            }
        }

        if(flag)
            cnt += 1;

        return cnt;
    }
};

int main() {
    Solution s;
    string st = "abccccdd";
    cout<<s.longestPalindrome(st)<<endl;
return 0;
}   