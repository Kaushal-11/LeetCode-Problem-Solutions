#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(auto x : operations){
            if((x == "++X") || (x == "X++"))
                ans += 1;
            if((x == "--X") || (x == "X--"))
                ans -= 1;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> op = {"++X","X++","X++"};
    cout<<s.finalValueAfterOperations(op)<<endl;
return 0;
}   