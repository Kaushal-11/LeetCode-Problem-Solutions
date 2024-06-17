#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n % groupSize != 0 || n < groupSize)
            return false;
        
        map<int, int> mp;
        for(int x : hand)
            mp[x]++;

        int len = n/groupSize;
        for (int i = 0; i < len; i++)
        {
            auto it = mp.begin();
            int key = it->first;
            if(mp[key] == 1)
                mp.erase(key);
            else
                mp[key]--;

            int j = 1;
            while(j < groupSize){
                if(mp.find(key+j) != mp.end()){
                    if(mp[key+j] == 1)
                        mp.erase(key+j);
                    else
                        mp[key+j]--;
                }
                else
                    return false;
                j++;
            }
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,6,2,3,4,7,8};
    int g_size = 3;
    cout<<s.isNStraightHand(nums, g_size)<<endl;
return 0;
}   