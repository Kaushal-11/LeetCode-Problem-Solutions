#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string result;
        unordered_set<string> start,end;
        for(auto it : paths) {
            start.insert(it[0]);
            end.insert(it[1]);
        }
        for(auto &it : end) {
            if(start.find(it) == start.end()){
                result = it;
                break;
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<vector<string>> paths = {{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    cout<<s.destCity(paths)<<endl;
return 0;
}   