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
    ListNode* merge(ListNode* list1, ListNode* list2)
    {
        
        if(list1->next==NULL)
        { 
            list1->next=list2;
            return list1;
        }    
        
        ListNode* curr1=list1;
        ListNode* next1= list1->next;
        ListNode* curr2= list2;
        ListNode* next2= NULL;
        
        while(next1!=NULL && curr2!=NULL)
        {
            if(curr1->val <= curr2->val  &&  curr2->val <= next1->val)
            {
                next2= curr2->next;
                curr1->next= curr2;
                curr2->next= next1;
                
                curr2= next2;
                curr1= curr1->next;
                next1= curr1->next;
            }
            else
            {
                curr1= next1;
                next1=curr1->next;
            }
        }
        
        if(curr2!=NULL)
        {
            curr1->next= curr2;
        }
        
        return list1;
    }
    
    
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        
        if(list1->val<= list2->val)
            return merge(list1,list2);
        
        else
            return merge(list2,list1);
    }
};