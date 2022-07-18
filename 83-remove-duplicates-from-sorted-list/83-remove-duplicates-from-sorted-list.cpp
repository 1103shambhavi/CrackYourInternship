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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode* curr=head;
        ListNode* n=curr->next;
        ListNode*temp;
        
        while(n!=NULL && curr!=NULL)
        {
            if(curr->val == n->val)
            {
                curr->next= n->next;
                temp=n;
                n=curr->next;
                temp->next=NULL;
                delete temp;
            }
            
            else{
                curr=n;
                n=n->next;
            }
        }
        return head;
        
    }
};