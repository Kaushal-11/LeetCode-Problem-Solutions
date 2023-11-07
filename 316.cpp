#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string& s) {
        string ans = "";
        unordered_map<char, int> temp;
        for (int i = 0; i < s.size(); i++)
        {
            if(temp.find(s[i]) == temp.end()){
                ans.push_back(s[i]);
                temp[s[i]++];
            }
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};

int main() {
    Solution st;
    string s = "bcabc";
    cout<<st.removeDuplicateLetters(s);

return 0;
}