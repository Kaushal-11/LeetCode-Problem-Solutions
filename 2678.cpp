#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for (int i = 0; i < details.size(); i++)
        {
            string s = details[i].substr(11,2);
            int age = stoi(s);
            if(age > 60)
                cnt++;
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<string> details = {"7868190130M7522","5303914400F9211","9273338290F4010"}; 
    cout<<s.countSeniors(details);
return 0;
}   