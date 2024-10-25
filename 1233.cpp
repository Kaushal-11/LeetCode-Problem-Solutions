#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string> fSet(folder.begin(), folder.end());
        vector<string> ans;

        for(string s : folder) {
            bool flag = false;
            string f = s;

            while(!f.empty()) {
                size_t pos = f.find_last_of('/');
                if(pos == string::npos)
                    break;

                f = f.substr(0, pos);

                if(fSet.count(f)){
                    flag = true;
                    break;
                }
            }

            if(!flag) 
                ans.push_back(s);

        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> f = {"/a","/a/b","/c/d","/c/d/e","/c/f"};
    vector<string> ans = s.removeSubfolders(f);
    for(auto x : ans) 
        cout<<x<<" ";
    return 0;
}
