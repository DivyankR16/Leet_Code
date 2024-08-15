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
    ListNode *solver(ListNode *p){
        if(p==NULL || p->next==NULL){
            return p;
        }
        ListNode *head=solver(p->next);
        ListNode *temp=p->next;
        temp->next=p;
        p->next=NULL;
        return head;
    }
    ListNode* reverseList(ListNode* head) {
        return solver(head);
    }
};