#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void generate(string s, int n, vector<string>& result){
        if(s.length() == n){
            result.push_back(s);
            return;
        }

        if(s.empty() || s.back() == '1')
            generate(s + '0', n, result);
            
        generate(s + '1', n, result);

    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        generate("", n, ans);
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> ans = s.validStrings(3);
    for(string s : ans)
        cout<<s<<" ";
return 0;
}   