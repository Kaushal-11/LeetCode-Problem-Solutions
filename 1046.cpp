#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.rbegin(),stones.rend());
        for(int x : stones){
            cout<<x<<" ";
        }
    }
};

int main() {
    vector<int> s = {1,4,7,2,4,9,7};
    Solution o;
    o.lastStoneWeight(s);
    
return 0;
}