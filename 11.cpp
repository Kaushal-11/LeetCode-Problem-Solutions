#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int l = 0, r = height.size()-1;
        while(l < r){
            int temp_area = min(height[l],height[r])*(r - l);
            area = max(area,temp_area);

            if(height[l] > height[r]){
                r--;
            }else{
                l++;
            }
        }
        return area;
    }
};

int main() {
    Solution s;
    vector<int> h = {1,8,6,2,5,4,8,3,7};
    cout<<s.maxArea(h);
return 0;
}   