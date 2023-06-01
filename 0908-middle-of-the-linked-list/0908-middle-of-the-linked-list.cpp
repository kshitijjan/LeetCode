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
    ListNode* middleNode(ListNode* head) {
        
        int count = 1;

        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        temp = head;
        if(count%2!=0){
            count = (count/2);
            while(count!=0){
                temp = temp->next;
                count--;
            }
        }
        else{
            count = (count/2)-1;
            while(count!=0){
                temp = temp->next;
                count--;
            }
        }
        return temp;
    }
};