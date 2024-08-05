#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int, int> mp1, mp2;
        for(int x : arr)
            mp1[x]++;
        for (int x : target)
            mp2[x]++;
        return mp1 == mp2;        
    }
};

int main() {
    Solution s;
    vector<int> target = {1,2,3}, arr = {3,2,1};
    cout<<s.canBeEqual(target, arr)<<endl;
return 0;
}   