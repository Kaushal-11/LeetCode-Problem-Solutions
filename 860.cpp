#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f_cnt = 0, t_cnt = 0;
        for (int i = 0; i < bills.size(); i++)
        {
            if(bills[i] == 5)
                f_cnt++;
            else if(bills[i] == 10){
                t_cnt++;
                if(f_cnt)
                    f_cnt--;
                else    
                    return false;
            }
            else{
                if(f_cnt && t_cnt){
                    f_cnt--;
                    t_cnt--;
                }
                else if(f_cnt >= 3)
                    f_cnt -= 3;
                else
                    return false;
            }
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<int> bills = {5,5,10,10,20};
    cout<<s.lemonadeChange(bills);
    return 0;
}
