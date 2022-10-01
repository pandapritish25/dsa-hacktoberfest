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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode*prev=NULL;
        ListNode*rmv=head;
        int count=0;
        while(temp)
        {
            count++;
            if(count>n)
            {
              prev=rmv;
              rmv=rmv->next;
            }
            temp=temp->next;
        }
        if(!prev)
        {
            return head->next;
        }
        prev->next=rmv->next;
        return head;
    }
};