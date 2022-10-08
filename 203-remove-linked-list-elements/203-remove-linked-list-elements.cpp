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
        // Checking if head is not the key
        // If head is key then this is only tricky part of question
        ListNode* temp;
        
        

        // Deleter all occurance of Key if it is present as head
        while(head != NULL && head->val == val){
            temp = head ->next;
            delete head;
            head = temp;
        }
        
        // base condition
        if(head == NULL) return head;
        
        ListNode* current = head->next;
        ListNode* previous = head;

        while(current != NULL){
            if(current->val == val){
                previous->next = current->next;
                delete current;
                current = previous->next;
                continue;
            }
            previous = current;
            current = current->next;
        }

        return head;
    }
};    