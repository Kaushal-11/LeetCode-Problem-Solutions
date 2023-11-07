#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode *temp = head;
        while(temp != NULL){
            temp = temp->next;
            cnt++;
        }
        
        if(cnt == n){
            return head->next;
        }

        ListNode *ans = head;
        temp = ans;
        int index = 1;
        while(temp != NULL){
            if(index == cnt - n){
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
            index++;
        }
        return ans;
    }
};

int main() {

return 0;
}   