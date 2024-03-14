#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        set<int> s;
        for(auto it : mp){
            if(s.count(it.second))
                return false;
            s.insert(it.second);
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,2,3};
    cout<<s.uniqueOccurrences(v);
return 0;
}   