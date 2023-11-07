#include<bits/stdc++.h>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;

        while(a->next && b->next){
            if(a == b){
                return a;
            }
            a = a->next;
            b = b->next;
        }

        if(a->next == 0){
            int lengthB = 0;
            while(b->next){
                lengthB++;
                b = b->next;
            }

            while(lengthB--){
                headB = headB->next;
            }
        }
        else{
            int lengthA = 0;
            while(a->next){
                lengthA++;
                a = a->next;
            }

            while(lengthA--){
                headA = headA->next;
            }
        }

        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};

int main() {
    Solution s;
return 0;
}