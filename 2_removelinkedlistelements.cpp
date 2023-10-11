//----------------Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.---------
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

    ListNode* removeElements(ListNode* head, int val) {
        while (head && head->val == val) {
            ListNode* c = head;
            head = head->next;
            delete c;
        }

        ListNode* temp = head;

        while (temp) {
            while (temp->next && temp->next->val == val) {
                ListNode* c = temp->next;
                temp->next = temp->next->next;
                delete c;
            }
            temp = temp->next;
        }
        return head;
    }
};