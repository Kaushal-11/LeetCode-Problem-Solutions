#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(deadends.begin(), deadends.end());
        queue<pair<string,int>> q;
        unordered_set<string> visited;

        if(dead.find("0000") == dead.end()){
            q.push({"0000",0});
            visited.insert("0000");
        }

        while(!q.empty()){
            pair<string, int> current = q.front();
            q.pop();

            string s = current.first;
            int cnt = current.second;

            if(s == target)
                return cnt;

            for (int i = 0; i < 4; i++)
            {
                string temp1, temp2;
                temp1 = s.substr(0,i) + to_string((s[i] - '0' + 1)%10) + s.substr(i+1);
                temp2 = s.substr(0,i) + to_string((s[i] - '0' - 1 + 10)%10) + s.substr(i+1);

                if(dead.find(temp1) == dead.end() && visited.find(temp1) == visited.end()){
                    q.push({temp1,cnt+1});
                    visited.insert(temp1);
                }
                if(dead.find(temp2) == dead.end() && visited.find(temp2) == visited.end()){
                    q.push({temp2,cnt+1});
                    visited.insert(temp2);
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<string> deadends = {"0201","0101","0102","1212","2002"};
    string target = "0202";
    cout<<s.openLock(deadends,target);
return 0;
}   