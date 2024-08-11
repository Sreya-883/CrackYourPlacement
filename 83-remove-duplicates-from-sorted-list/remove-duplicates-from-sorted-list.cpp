/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr=head,*nextn=head;
        while(curr!=nullptr){
            nextn=curr->next;
            while(nextn!=nullptr&&nextn->val==curr->val) nextn=nextn->next;
            curr->next=nextn;
            curr=nextn;
        }
        return head;
    }
};