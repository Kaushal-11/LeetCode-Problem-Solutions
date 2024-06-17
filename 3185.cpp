#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int cnt = 0;
        unordered_map<int, int> mp;

        for (int i = 0; i < hours.size(); i++)
        {
            int temp = hours[i] % 24;
            int comp = (24 - temp) % 24;

            if(mp.find(comp) != mp.end())
                cnt += mp[comp];

            mp[temp]++;
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> hours = {72,48,24,3};
    cout<<s.countCompleteDayPairs(hours)<<endl;
return 0;
}   