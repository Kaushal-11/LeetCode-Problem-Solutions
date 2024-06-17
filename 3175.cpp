#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        queue<int> q;
        for (int i = 0; i < skills.size(); i++)
            q.push(i);
        
        int curr = q.front();
        q.pop();
        int cnt = 0;

        while(cnt < k){
            int temp = q.front();
            q.pop();

            if(skills[curr] > skills[temp]){
                cnt++;
                q.push(temp);
            }else{
                curr = temp;
                cnt = 1;
            }
            
            q.push(curr);
        }
        return curr;
    }
};

int main() {
    Solution s;
    vector<int> skills = {2,5,4};
    int k = 3;
    cout<<s.findWinningPlayer(skills, k);
return 0;
}   