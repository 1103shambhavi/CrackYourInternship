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
    ListNode* removeElements(ListNode* head, int val) 
    {
        //if head==NULL
        if(head==NULL)
            return head;
        
        ListNode* temp = head;
      
        
        
         //temp = head->next;
        ListNode* prev = head;
        
        while(temp!=NULL)
        {
             //if head is the key
            if(head->val==val)
            {
                temp=head->next;
                delete head;
                head=temp;
            }
            
            
            else if(temp->val == val)
            {
                prev->next = temp->next;
                temp = temp->next;
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};