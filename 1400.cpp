#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {

        if(s.size() < k)
            return false;
        
        vector<int> freq(26);
        int cnt = 0;
        for(auto ch : s)
            freq[ch - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            if(freq[i] % 2 == 1)
                cnt++;
        }
        
        return (cnt <= k);
    }
};
int main() {
    Solution s;
    string st = "aaabsjdj";
    int k = 2;
    cout<<s.canConstruct(st, k)<<endl;
    return 0;
}
