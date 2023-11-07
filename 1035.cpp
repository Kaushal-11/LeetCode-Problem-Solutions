#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int j = 0,c1=0,c2=0;
        int temp1 = 0,temp2;
        for (int i = 0; i < nums1.size(); i++)
        {
            
            for (j=temp1; j < nums2.size(); j++)
            {
                if(nums1[i] == nums2[j]){
                    c1++;
                    temp1 = j+1;
                    break;
                }
            }
            
        }
        cout<<c1<<endl;
        j--;
        temp2 = j;
        for (int i = nums1.size()-1; i >= 0; i--)
        {
            for (j = temp2; j >= 0; j--)
            {
                if(nums1[i] == nums2[j]){
                    c2++;
                    temp2 = j-1;
                    break;
                }
            }
            
        }
        cout<<c2<<endl;
        return max(c1,c2);
    }
};

int main() {
    vector<int> v1 = {1,3,7,1,7,5};
    vector<int> v2 = {1,9,2,5,1};
    Solution s;
    cout<<s.maxUncrossedLines(v1,v2);
return 0;
}