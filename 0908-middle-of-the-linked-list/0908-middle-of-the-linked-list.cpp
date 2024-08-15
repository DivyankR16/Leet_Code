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
    ListNode* middleNode(ListNode* head) {
        ListNode *f=head;
        ListNode *s=head;
        while(true){
            if(f->next==NULL){
                return s;
            }
            if(f->next->next==NULL){
                return s->next;
            }
            s=s->next;
            f=f->next->next;
        }
    }
};