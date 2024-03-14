#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(int i=0; i<s.size(); i++) {
            mp1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++) {
            mp2[t[i]]++;
        }
        int ans = 0,cnt = 0;
        for(auto x : mp1){
            if(mp2.find(x.first) != mp2.end()){
                cnt = mp2[x.first];
                if(cnt < x.second)
                    ans += x.second-cnt;
            }
            else
                ans += x.second;
        }
        return ans;
    }
};

int main() {
    Solution sl;
    string s = "ana" , t = "aba";
    cout<<sl.minSteps(s,t) << endl;
return 0;
}