#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum = 0;
        for (int i = 0; i < grumpy.size(); i++)
        {
            if(grumpy[i] == 0)
                sum += customers[i];
        }
        
        int maxi = 0, temp = 0;
        for (int i = 0; i < customers.size(); i++)
        {
            if(grumpy[i] == 1)
                temp += customers[i];
            if(i > minutes && grumpy[i-minutes] == 1)
                temp -= customers[i - minutes];

            maxi = max(maxi, temp);
        }
        return sum + maxi;
    }
};

int main() {
    Solution s;
    vector<int> groumpy = {0,1,0,1,0,1,0,1}, customer = {1,0,1,2,1,1,7,5};
    int minutes = 3;
    cout<<s.maxSatisfied(customer, groumpy, minutes);
return 0;
}   