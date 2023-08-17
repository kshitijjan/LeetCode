/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    void inorder(TreeNode* cloned, TreeNode* target, TreeNode* &node){

        if(cloned == NULL){
            return;
        }
        if(cloned->val == target->val)
            node = cloned;

        inorder(cloned->left, target, node);
        inorder(cloned->right, target, node);

    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned == NULL || target == NULL){
            return NULL;
        }
        TreeNode* node = NULL;

        inorder(cloned, target, node);

        return node;    
    }
};