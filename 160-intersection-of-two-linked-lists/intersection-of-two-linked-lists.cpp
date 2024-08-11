/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tail=headB;
        while(tail->next) tail=tail->next;
        tail->next=headB;
        ListNode *slow=headA,*fast=headA;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=headA;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                tail->next=nullptr;
                return fast;
            }
        }
        tail->next=nullptr;
        return nullptr;
    }
};