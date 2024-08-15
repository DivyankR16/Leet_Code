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
        ListNode *prev=NULL;
        ListNode *p=head;
        ListNode *temp=NULL;
        while(p!=NULL){
            temp=p->next;
            p->next=prev;
            prev=p;
            if(!temp){
                break;
            }
            p=temp;
        }
        return p;
    }
};