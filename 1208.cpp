#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.length();
        int i = 0;
        int curr_cost = 0;
        int maxi = 0;

        for (int j = 0; j < n; j++){
            curr_cost += abs(s[j] - t[j]);
            while(curr_cost > maxCost){
                curr_cost -= abs(s[j] - t[j]);
                i++;
            }
            maxi = max(maxi, j-i+1);
        }
        return maxi;
    }
};

int main() {
    Solution st;
    string s ="abcd", t = "bcdf";
    int maxCost = 3;
    cout<<st.equalSubstring(s, t, maxCost);
return 0;
}   