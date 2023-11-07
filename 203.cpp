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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return head;
        }
        while(head){
            if(head->val == val){
                head = head->next;
            }
        }

        ListNode *current = head;
        ListNode *prev = NULL;
        while(current){
            if(current->val == val){
                current = current->next;
                prev->next = current;
            }
            else{
                prev = current;
                current = current->next;
            }
        }
        return head;
    }
};

int main() {

return 0;
}   