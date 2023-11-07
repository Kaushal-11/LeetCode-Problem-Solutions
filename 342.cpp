#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        int ans;
        int i = 0;
        do{
            ans = pow(4,i);
            // cout<<ans<<endl;
            if(ans == n){
                return 1;
            }
            i++;
        }while(ans < n);
        return false;
    }
};

int main() {
    Solution s;
    cout<<s.isPowerOfFour(1);
return 0;
}   