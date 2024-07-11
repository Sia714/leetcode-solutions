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
    ListNode* swapNodes(ListNode* head, int k) {

        int count=0;
        ListNode *temp=head;
        while(temp->next){
            temp=temp->next;
            count++;
        }
        count++;
        ListNode *p1=head;
        ListNode *p2=head;
        for(int i=0;i<k-1;i++){
            p1=p1->next;
        }
        for(int i=0;i<count-k;i++){
            p2=p2->next;
        }
        
        int ko=p1->val;
        p1->val=p2->val;
        p2->val=ko;
        return head;


    }
};
