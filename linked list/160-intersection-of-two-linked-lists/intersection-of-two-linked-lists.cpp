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
    int Countnode(ListNode * head1){
        int count=0;
        while(head1){
            head1=head1->next;
            count++;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=Countnode(headA);
        int b=Countnode(headB);

        ListNode* ans=nullptr;
        ListNode *temp1=headA;
        ListNode *temp2=headB;

        int c;
        if(a>b){
            c=a-b;
            while(c){
                temp1=temp1->next;
                c--;
            }
        }
        else{
            c=b-a;
            while(c){
                temp2=temp2->next;
                c--;
            }
        }
        while(temp2){
            if(temp1==temp2){
                ans=temp1;
                break;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return ans;
    }
};
