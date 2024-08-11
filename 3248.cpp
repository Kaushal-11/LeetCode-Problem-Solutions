#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int row = 0, col = 0;
        
        for (const string& cmd : commands) {
            if (cmd == "UP") row = (row - 1 + n) % n;
            else if (cmd == "DOWN") row = (row + 1) % n;
            else if (cmd == "LEFT") col = (col - 1 + n) % n;
            else if (cmd == "RIGHT") col = (col + 1) % n;
        }
        
        return row * n + col;
    }
};

int main() {
    Solution s;
    vector<string> commands = {"DOWN","RIGHT","UP"};
    cout<<s.finalPositionOfSnake(3, commands)<<endl;
    return 0;
}
