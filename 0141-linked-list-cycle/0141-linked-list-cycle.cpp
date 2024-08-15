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
    bool hasCycle(ListNode *head) {
        set<ListNode*>s;
        ListNode *p=head;
        while(p!=NULL){
            if(s.find(p)!=s.end()){
                return 1;
            }
            s.insert(p);
            p=p->next;
        }
        return 0;
    }
};