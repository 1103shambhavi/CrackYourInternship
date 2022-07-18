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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*prev=NULL;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        
        ListNode*mid=slow;
        if(mid->next==NULL)
        {
            prev->next=NULL;
        }
        else
            prev->next=mid->next;
        
        mid->next=NULL;
        delete mid;
        
        return head;
    }
    
};