#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> mp;
        for (int i = 0; i < names.size(); i++){
            mp[heights[i]] = names[i];
        }

        vector<string> ans;
        for(auto it = mp.rbegin(); it != mp.rend(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> names = {"Mary","John","Emma"};
    vector<int> heights = {180,165,170};
    vector<string> ans = s.sortPeople(names, heights);
    for(string s : ans)
        cout<<s<<" ";
return 0;
}