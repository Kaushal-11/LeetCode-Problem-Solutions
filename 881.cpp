#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        sort(people.begin(), people.end());
        int i = 0;
        int j = people.size() - 1;
        int ans = 0;
        while (i <= j)
        {
            ans++;
            if (people[i] + people[j] <= limit)
                i++;
            j--;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> people = {3,2,2,1};
    int limit = 3;
    cout<<s.numRescueBoats(people, limit)<<endl;
    return 0;
}