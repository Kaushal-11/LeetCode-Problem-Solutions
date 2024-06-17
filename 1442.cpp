#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int k = i; k < n; k++)
            {
                sum ^= arr[k];
                if(sum == 0 && k-i > 0){
                    cnt += (k-i);
                }
            }
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> arr = {2,3,1,6,7};
    cout<<s.countTriplets(arr)<<endl;
return 0;
}   