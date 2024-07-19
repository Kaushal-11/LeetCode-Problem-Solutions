#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& p, int m) {
        
        int i,l=0,h=1e9,ans=0;
        sort(p.begin(),p.end());

        while(l<=h)
        {
            int mid = (l + h)/2 ;
            int cnt =0,j=p[0];
            for(i=0;i<p.size();i++)
            {
                if(p[i]-j>=mid)
                {
                  cnt++;
                  j=p[i];
                }
            }
            if(cnt>=m)
            {
                ans=max(ans,mid);
                l=mid+1;
            }
            else
                h=mid-1;

        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,2,3,4,6};
    int m = 3;
    cout<<s.maxDistance(v,m);
return 0;
}   