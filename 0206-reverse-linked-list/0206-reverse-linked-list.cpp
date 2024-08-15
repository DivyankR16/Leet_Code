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
    ListNode *ans;
    void solver(ListNode *p,ListNode *prev){
        if(p==NULL){
            ans=prev;
            return;
        }
        ListNode *temp=p->next;
        p->next=prev;
        solver(temp,p);
    }
    ListNode* reverseList(ListNode* head) {
        solver(head,NULL);
        return ans;
    }
};