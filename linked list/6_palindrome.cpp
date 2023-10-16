//-------------Given the head of a singly linked list, return true if it is a palindrome or false otherwise.------------
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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *curr = slow;
        ListNode *prev = nullptr;

        while (curr!=NULL){
            ListNode *c = curr->next;
            curr->next = prev;
            prev = curr;
            curr = c;
        }
        ListNode *sec=prev;
        while(sec!=nullptr){
            if(sec->val!=temp->val){
                return false;
            }
            sec=sec->next;
            temp=temp->next;
        }
        return true;
    }
};