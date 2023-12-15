#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int match = 0;
        int advance = 0;
        while(n > 1){
            if(n % 2 == 0){
                match += (n/2);
                advance = (n/2);
            }else{
                match += ((n-1)/2);
                advance = ((n-1)/2 + 1);
            }
            n = advance;
        }
        return match;
    }
};

int main() {
    Solution s;
    cout<<s.numberOfMatches(14);
return 0;
}