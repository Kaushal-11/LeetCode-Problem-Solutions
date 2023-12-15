#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int ans = n/4;
        int cnt = 1;
        int temp = arr[0];
        for (int i = 1; i < n; i++){
            if(temp == arr[i])
                cnt++;
            else
                cnt = 1;

            if(cnt > ans)
                return arr[i];

            temp = arr[i];
        }
        return temp;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1,1,3,4,6,6,7,7,8};
    cout<<s.findSpecialInteger(arr);
return 0;
}   