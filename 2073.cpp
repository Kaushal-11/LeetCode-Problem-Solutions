#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int cnt = 0;
        bool flag = false;
        while(true){
            for (int i = 0; i < tickets.size(); i++)
            {
                if(tickets[i] == 0)
                    continue;
                cnt++;
                tickets[i]--;
                if(i == k && tickets[i] == 0){
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> tickets = {2,3,2};
    int k = 2;
    cout<<s.timeRequiredToBuy(tickets,k)<<endl;
return 0;
}   