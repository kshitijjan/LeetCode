/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    int inorder(TreeNode* root){

        if(root == NULL){
            return NULL;
        }

        int left = inorder(root->left);
        int right = inorder(root->right);

        int ans = max(left, right) + 1;

        return ans;
    }
public:
    int maxDepth(TreeNode* root) {
        
        return inorder(root);


    }
};