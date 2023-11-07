#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        float ans = 0;
        vector<float> temp;
        for(int i = 0 ;i < dist.size() ; i++){
            ans = ((float)dist[i]/(float)speed[i]);
            temp.push_back(ans);
        }

        sort(temp.begin(), temp.end());

        int cnt = 0;
        for(int i = 0; i < dist.size() ; i++){
            if(float(cnt) >= temp[i])
                break;
            cnt++;
        }

        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> dist = {3,2,4};
    vector<int> speed = {5,3,2};
    cout<<s.eliminateMaximum(dist,speed);
return 0;
}   