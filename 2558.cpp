#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        priority_queue<int> pq(gifts.begin(), gifts.end());
        for (int i = 0; i < k; i++){
            int maxi = pq.top();
            pq.pop();
            pq.push(sqrt(maxi));
        }
        
        long long count = 0;
        while(!pq.empty()){
            count += pq.top();
            pq.pop();
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int> gift = {25,64,9,4,100};
    int k = 4;
    cout<<s.pickGifts(gift, k)<<endl;
    return 0;
}
