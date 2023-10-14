//-------Given the head of a singly linked list, reverse the list, and return the reversed list.///////
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
    ListNode* reverseList(ListNode* head) {
        ListNode* c=head;
        ListNode* prev=nullptr;
        while(c){
            ListNode* temp=c->next;
            c->next=prev;
            prev=c;
            c=temp;
        }
        return prev;
    }
};