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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* temp = head;
        

        if(head == NULL){  //If all the nodes contains val
            return NULL;
        }

        while(temp!=NULL && temp->next!=NULL){
            
            if(temp->next->val == val){   //For all the middle node
                temp->next = temp->next->next;
            }

            else{
                temp = temp->next;
            }
        }
        if(head->val == val){  //First Node contains val, also refer 1st if
                head = head->next;
        }
        
        return head;
    }
};