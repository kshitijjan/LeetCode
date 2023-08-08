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
    int gcdFind(int n1, int n2){

        int gcd = 1;
    
        for(int i = 1; i <= n1 || i <= n2; i++) {
        if(n1 % i == 0 && n2 % i == 0)
            gcd = i;
        }
    
        return gcd;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != NULL){
            int a = slow->val;
            int b = fast->val;

            int ans = gcdFind(a,b);

            ListNode* newNode = new ListNode(ans);
            slow->next = newNode;
            newNode->next = fast;

            slow = slow->next->next;
            fast = fast->next;
        }
        return head;

        

    }
};