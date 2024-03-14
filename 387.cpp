#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int index=-1;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]==1){
                index=i;
                break;
            }
        }
        return index;
    }
};

int main()
{
    Solution s;
    string st = "Leetcode";
    cout<<s.firstUniqChar(st)<<endl;
    return 0;
}