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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* newNode = new ListNode(0);  //New LinkedList created
        ListNode* node = newNode;  //Pointer pointing to each node of new LL
        ListNode* temp = head;     //P0inter pointing to each node of given LL
        temp = temp->next;         //Starting from 2nd element bcz 1st is 0
        int sum = 0;
        while(temp!=NULL){
            while(temp->val != 0){       
                sum += temp->val;
                temp = temp->next;
            }
            node->next = new ListNode(sum);  //Node created and added next to node pointer in new LL
            node = node->next;
            temp = temp->next;
            sum = 0;
        }
        return newNode->next;

    }
};