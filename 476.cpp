#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        if(num == 0)
            return 1;

        unsigned int mask = ~0;    
        while(num & mask) {
            mask <<= 1;
        }
        return ~num & ~mask;
    }
};

int main() {
    Solution s;
    cout<<s.findComplement(5)<<endl;
    return 0;
}
