#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int right = arr.size()-1, left = 0;
        while(right > 0 && arr[right] >= arr[right-1])
            right--;
        int ans = right;
        while(left < right && (left == 0 || arr[left] >= arr[left-1])){
            while(right < arr.size() && arr[left] > arr[right])
                right++;
            ans = min(ans, right-left-1);
            left++;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1,2,3,10,4,2,3,5};
    cout<<s.findLengthOfShortestSubarray(arr)<<endl;
    return 0;
}
