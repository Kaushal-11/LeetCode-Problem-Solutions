#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int prev = 0;
        for(string s : bank){
            int curr = 0;
            for (int j = 0; j < s.length(); j++)
            {
                if(s[j] == '1')
                    curr++;
            }
            if(curr > 0){
                ans += curr*prev;
                prev = curr;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> bank = {"011001","000000","010100","001000"};
    cout<<s.numberOfBeams(bank);
return 0;
}   