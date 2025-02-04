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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode *p,*q,*r = nullptr,*slow,*fast;
        slow = fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            if(fast) slow = slow->next;
        }
        q = sortList(slow->next);
        slow->next = NULL;
        p = sortList(head);
        while(p && q){
            if(p->val<q->val){
                if(!r){
                    r = p;
                    head = r;
                }
                else {
                    r->next = p;
                    r = r->next;
                }
                p = p->next;
            }else{
                if(!r){ 
                    r = q;
                    head = r;
                }
                else {
                    r->next = q;
                    r = r->next;
                }
                q = q->next;
            }
        }
        while(p){
            r->next = p;
            r = r->next;
            p = p->next;
        }
        while(q){
            r->next = q;
            r = r->next;
            q = q->next;
        }
        return head;
    }
};