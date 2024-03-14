#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for (int i = 0; i < arr.size()-2; i++)
        {
            if(arr[i] % 2 != 0 && arr[i+1] % 2 != 0 && arr[i+2] % 2 != 0)
                return true;
        }
        return false;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1,2,34,3,4,5,7,23,12};
    cout<<s.threeConsecutiveOdds(arr)<<endl;
return 0;
}