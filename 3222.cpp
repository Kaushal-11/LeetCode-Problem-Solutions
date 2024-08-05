#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string losingPlayer(int x, int y) {
        int mini = min(x, y/4);
        if(mini % 2 == 1)
            return "Alice";
        else
            return "Bob";
    }
};

int main() {
    Solution s;
    cout<<s.losingPlayer(4,11);
return 0;
}   