#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string nearestPalindromic(string n) {
        long ori_num = stol(n);
        long len = n.length();

        if(len == 1)
            return to_string(stol(n) - 1);

        vector<long> v;
        v.push_back(pow(10, len-1) - 1);
        v.push_back(pow(10, len) + 1);

        long half = (len + 1)/2;
        long prefix = stol(n.substr(0, half));
        vector<long> v_pref = {prefix, prefix-1, prefix+1};

        for(auto x : v_pref){
            string left = to_string(x);
            string right = left;
            if(len % 2)
                right.pop_back();
            reverse(right.begin(), right.end());
            v.push_back(stol(left+right));
        }

        long mini = LONG_MAX;
        long ans = 0;
        for(auto x : v){
            long diff = abs(x - ori_num);
            if(x != ori_num && diff < mini){
                ans = x;
                mini = diff;
            }
            else if(diff == mini){
                ans = min(x, ans);
            }
        }

        return to_string(ans);
    }
};

int main() {
    Solution s;
    string n = "123";
    cout<<s.nearestPalindromic(n);
    return 0;
}
