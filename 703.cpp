#include<bits/stdc++.h>
using namespace std;

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
    KthLargest(int k, vector<int>& nums) {
        for(int x : nums){
            pq.push(x);
            if(pq.size() > k)
                pq.pop();
        }        
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > k)
            pq.pop();

        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// int main() {
//     int k = 3;
//     vector<int> nums = {4, 5, 8, 2};
//     KthLargest* obj = new KthLargest(k, nums);
//     obj.add(3);
//     obj.add(5);
//     obj.add(10);
//     obj.add(9);
//     obj.add(4);

//     return 0;
// }
