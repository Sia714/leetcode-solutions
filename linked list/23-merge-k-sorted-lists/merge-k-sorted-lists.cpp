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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto cmp = [](ListNode* a, ListNode* b) {
            return a->val > b->val;
        };

        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> pq(cmp);
        ListNode* ans=new ListNode(-1);
        
        for(int i=0;i<lists.size();i++){
            if(lists[i]){
                pq.push(lists[i]);
            }
        }
        if(pq.empty()){
            return nullptr;
        }
        ListNode* result=ans;
        while(!pq.empty()){          
            ListNode* an=pq.top();
            pq.pop();
            cout<<an->val;
            ans->next=an;
            ans=ans->next;
            if(an->next){
                pq.push(an->next);
            }
        }
        return result->next;        
    }
};
