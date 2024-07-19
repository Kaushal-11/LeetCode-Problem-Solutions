#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i = 1; i <= n; i++)
            q.push(i);
        
        while(q.size() > 1){
            for (int j = 1; j < k; j++)
            {
                q.push(q.front());
                q.pop();
            }
            q.pop();
        }

        return q.front();
    }
};

int main() {
    Solution s;
    cout<<s.findTheWinner(5,2);
return 0;
}   