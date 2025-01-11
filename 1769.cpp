#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> answer(n, 0);

        int b_left = 0, move_left = 0;
        int b_right = 0, move_right = 0;

        for (int i = 0; i < n; i++) {
            answer[i] += move_left;
            b_left += boxes[i] - '0';
            move_left += b_left;

            int j = n - 1 - i;
            answer[j] += move_right;
            b_right += boxes[j] - '0';
            move_right += b_right;
        }

        return answer;
    }
};

int main() {
    Solution s;
    string st = "101";
    vector<int> ans = s.minOperations(st);
    for(int x : ans)
        cout<<x<<" ";
    return 0;
}
