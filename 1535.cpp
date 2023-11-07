#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        unordered_map<int,int> m;
        int n = arr.size();
        deque<int> d;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            d.push_back(arr[i]);
            maxi = max(maxi, arr[i]);
        }
        if(k >= n){
            return maxi;
        }

        while(1){
            int a = d.front();
            d.pop_front();
            int b = d.front();
            d.pop_front();
            if(a > b){
                d.push_front(a);
                d.push_back(b);
                m[a]++;
                if(m[a] >= k)
                return a;
            }
            else{
                d.push_front(b);
                d.push_back(a);
                m[b]++;
                if(m[b] >= k){
                    return b;
                }
            }
        }
    }
};

int main() {
    Solution s;
    vector<int> v = {2,1,3,5,4,6,7};
    int k = 2;
    cout<<s.getWinner(v,k);
return 0;
}       