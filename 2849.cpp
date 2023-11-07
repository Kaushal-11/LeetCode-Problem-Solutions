#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int dist_x = abs(fx - sx);
        int dist_y = abs(fy - sy);
        if(dist_x == 0 && dist_y == 0){
            return t != 1;
        } 
        int ans = max(dist_x , dist_y);
        return ans <= t;
    }
};

int main() {
    Solution s;
    cout<<s.isReachableAtTime(2,4,7,7,6);
return 0;
}