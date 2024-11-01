#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        char temp = s[0];
        string ans = "";
        int cnt = 1;
        ans.push_back(temp);

        for (int i = 1; i < s.length(); i++)
        {
            if(temp == s[i])
                cnt++;
            else{
                temp = s[i];
                cnt = 1;
            }
            if(cnt < 3)
                ans.push_back(temp);
        }
        return ans;
    }
};

int main() {
    Solution s;
    string st = "leeetcode";
    cout<<s.makeFancyString(st)<<endl;
    return 0;
}
