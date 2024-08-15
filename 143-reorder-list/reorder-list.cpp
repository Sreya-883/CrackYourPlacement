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
    ListNode* reverse(ListNode* head) {
        ListNode *prev = nullptr,*curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
            if(head==nullptr||head->next==nullptr) return;
            ListNode *slow = head,*fast = head;
            while (fast && fast->next) {
                slow = slow->next;
                fast = fast->next->next;
            }
            ListNode* rev = reverse(slow);
            //slow->next=nullptr;
            ListNode *start=head,*t=head;
                while(rev->next!=nullptr){
                    t=rev->next;
                    rev->next=start->next;
                    start->next=rev;
                    start=rev->next;
                    rev=t;
                }
    }
};