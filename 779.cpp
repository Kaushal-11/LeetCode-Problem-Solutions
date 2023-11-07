#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int nCr(int n,int r){
        if(r > n-r){
            r = n-r ;
        }

        int ans = 1;
        for (int i = 0; i < r; i++)
        {
            ans *= (n-i);
            ans /= (i+1);
        }
        return ans;
    }
    int numTrees(int n) {
        return nCr(2*n,n)/(n+1) ;
    }
};

int main() {
    Solution s;
    cout<<s.numTrees(3);
return 0;
}   