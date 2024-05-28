#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        unordered_map<int, int> mp;
        for(int x : students){
            mp[x]++;
        }
        for (int i = 0; i < n; i++)
        {
            if(mp[sandwiches[i]] == 0)
                return n-i;
            else{
                mp[sandwiches[i]]--;
                if(mp[sandwiches[i]] == 0)
                    mp.erase(sandwiches[i]);
            }
        }
        return 0;
    }
};

int main() {
    Solution s;
    vector<int> students = {1,1,0,0};
    vector<int> sandwiches = {0,1,0,1};
    cout<<s.countStudents(students, sandwiches);
return 0;
}