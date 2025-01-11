#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> v(n+1, 0);
        for(auto x : shifts) {
            if(x[2] == 0){
                v[x[0]] -= 1;
                v[x[1] + 1] += 1;
            }
            else{
                v[x[0]] += 1;
                v[x[1] + 1] -= 1;
            }
        }

        for (int i = 1; i < n; i++)
        {
            v[i] += v[i-1];
        }
        for (int i = 0; i < n; i++)
        {
            s[i] = (((s[i] - 'a' + v[i]) % 26) + 26 ) % 26 + 'a';
        }
        return s;
    }
};

int main() {
    Solution s;
    string st = "abc";
    vector<vector<int>> shifts = {{0,1,0},{1,2,1},{0,2,1}};
    cout<<s.shiftingLetters(st, shifts);
    return 0;
}
