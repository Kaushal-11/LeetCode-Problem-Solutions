#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int base = minutesToTest/minutesToDie + 1;
        for (int i = 0; i < 10; i++)
        {
            if(powl(base,i) >= buckets)
                return i;
        }
        return 10;
    }
};

int main() {
    Solution s;
    cout<<s.poorPigs(4,15,30);

return 0;
}   