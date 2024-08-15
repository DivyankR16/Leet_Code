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
        if(head==NULL){
            return 0;
        }
        ListNode *p=head;
        ListNode *q=head;
        while(true){
            p=p->next;
            if(!p){
                return 0;
            }
            q=q->next;
            if(!q){
                return 0;
            }
            q=q->next;
            if(!q){
                return 0;
            }
            if(q==p){
                return 1;
            }
        }
        return 1;
    }
};