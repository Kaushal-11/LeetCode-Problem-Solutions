#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfWays(string corridor) {
        int mod = 1e9+7;
        int n = corridor.size();
        vector<int> v;
        long long ans = 1;

        for (int i = 0; i < n; i++){
            if(corridor[i] == 'S')
                v.push_back(i);
        }

        if(v.size() % 2 != 0 || v.size() == 0){
            return 0;
        }
        else{
            for(int j = 2; j < v.size() ; j+=2){
                int temp = v[j] - v[j-1];
                ans = (ans * temp)%mod;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    string corridor = "SSPPSPS";
    cout<<s.numberOfWays(corridor);
return 0;
}