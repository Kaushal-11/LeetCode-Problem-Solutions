#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum = 0;

        for (int i = 1; i < colors.size(); i++)
        {
            if(colors[i-1] == colors[i]){
                if(neededTime[i-1] <= neededTime[i]) 
                    sum += neededTime[i-1];
                else{
                    sum += neededTime[i];
                    swap(neededTime[i-1], neededTime[i]);
                }
            }
        }
        return sum;
    }
};

int main() {
    Solution s;
    string st = "aabaa";
    vector<int> st1 = {1,2,3,4,1};
    cout<<s.minCost(st,st1)<<endl;
return 0;
}   