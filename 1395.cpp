#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int cnt = 0;
        int n = n;
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    if(rating[i] > rating[j] && rating[j]  > rating[k]){
                        cnt++;
                    }
                    if(rating[i] < rating[j] && rating[j] < rating[k]){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
}; 

int main() {
    Solution s;
    vector<int> nums = {2,5,3,4,1};
    cout<<s.numTeams(nums)<<endl;
return 0;
}   