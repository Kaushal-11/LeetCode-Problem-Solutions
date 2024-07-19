#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l = 0, r = 1e9;
        int ans = -1;
        while(l <= r){
            int mid = (l + r) / 2;
            int cnt = 0, j = 0;
            for (int i = 0; i < bloomDay.size(); i++)
            {
                if(bloomDay[i] <= mid)
                    j++;
                else
                    j = 0;
                if(j == k)
                    j = 0, cnt++;
            }
            if(cnt >= m){
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> bloomDay = {1,10,3,10,2};
    int m = 3, k = 1;
    cout<<s.minDays(bloomDay, m, k);
return 0;
}   