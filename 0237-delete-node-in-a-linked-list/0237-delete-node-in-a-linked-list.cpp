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
    void deleteNode(ListNode* node) {
        ListNode *p=node;
        while(true){
            p->val=p->next->val;
            if(p->next->next==NULL){
                p->next=NULL;
                break;
            }
            p=p->next;
        }
    }
};