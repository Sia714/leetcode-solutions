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
   
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count=0;
        if(!head||left==right){
            return head;
        }
        ListNode dummy(0, head);
        ListNode* prev=&dummy;
        ListNode* reverse=nullptr;
        ListNode* next=nullptr;

        for(int i=0;i<left-1;i++){
            prev=prev->next;
        }
        ListNode* curr=prev->next;

        for(int i=0;i<right-left+1;i++){
            next=curr->next;
            curr->next=reverse;
            reverse=curr;
            curr=next;
        }
        prev->next->next=curr;
        prev->next=reverse;
        return dummy.next;
        
    }
};
