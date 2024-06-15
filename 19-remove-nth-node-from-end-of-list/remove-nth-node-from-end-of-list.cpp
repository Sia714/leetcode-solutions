class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0, head); 
        ListNode* first = &dummy;
        ListNode* second = &dummy;
        
        for (int i = 0; i <= n; i++) {
            first = first->next;
        }

        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        ListNode* del = second->next;
        second->next = second->next->next;
        delete del;

        return dummy.next;
    }
};
