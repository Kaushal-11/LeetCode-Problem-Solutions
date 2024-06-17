#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();
        int cnt = 0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for (int i = 0; i < n; i++)
        {
            cnt += (abs(seats[i] - students[i]));
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> seats = {4,1,5,9}, students = {1,3,2,6};
    cout<<s.minMovesToSeat(seats,students)<<endl;
return 0;
}   