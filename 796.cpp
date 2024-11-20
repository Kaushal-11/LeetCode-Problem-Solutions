#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        string concat = s + s;

        return concat.find(goal);
    }
};

int main() {
    Solution s;
    string st = "abcde", goal = "cdeab";
    cout<<s.rotateString(st, goal)<<endl;
    return 0;
}
