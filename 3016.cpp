#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> mp;
        for(char c : word)
            mp[c]++;

        vector<int> v;
        for(auto it : mp)
            v.push_back(it.second);
        
        sort(v.begin(), v.end(), greater<int>());

        int ans = 0, cnt = 0;
        for(int x : v){
            cnt++;
            if(cnt <= 8)
                ans += x;
            else if(cnt <= 16)
                ans += 2*x;
            else if(cnt <= 24)
                ans += 3*x;
            else
                ans += 4*x;
        }
        return ans;
    }
};

int main() {
    Solution s;
    string st = "aabbccddeeffgghhiiiiii";
    cout<<s.minimumPushes(st);
return 0;
}   