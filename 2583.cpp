#include<bits/stdc++.h>
using namespace std;


//  * Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
//  */

class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<int> pq;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int size = q.size();
            int sum = 0;
            for (int i = 0; i < size; i++)
            {
                TreeNode* top = q.front();
                q.pop();
                sum += top->val;
                if(top->left != nullptr)
                    q.push(top->left);
                if(top->right != nullptr)
                    q.push(top->right);
            }
            pq.push(sum);
        }

        if(pq.size() < k)
            return -1;
        for (int i = 0; i < k-1; i++)
        {
            pq.pop();
        }
        return pq.top();
    }
};

int main() {
    Solution s;
    // TreeNode *tr = {5,8,9,2,1,3,7,4,6};
    // int k = 2;
    // cout<<s.kthLargestLevelSum(tr,k);
    return 0;
}
