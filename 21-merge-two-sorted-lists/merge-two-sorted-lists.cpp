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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        ListNode* re=new ListNode(-1);
        ListNode *res=re;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                res->next=list1;
                list1=list1->next;
            }
            else{
                res->next=list2;
                list2=list2->next;

            }
            res=res->next;

        }
        if(list1!=NULL){
            res->next=list1;
        }
            
        else{
            res->next=list2;
        }
        ListNode *result=re->next;
        delete re;
        return result;
    }
};