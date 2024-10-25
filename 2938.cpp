#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumSteps(string s) {
        int x = 0, cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == '0'){
                cnt += x;
            }
            else{
                x++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution s;
    string st = "001";
    cout<<s.minimumSteps(st)<<endl;
    return 0;
}
