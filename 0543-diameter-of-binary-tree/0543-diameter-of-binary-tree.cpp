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
    int height(TreeNode* root){

        if(root == NULL){
            return NULL;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        int ans = max(leftHeight, rightHeight)+1;

        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }

        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int heightOfTree = height(root->left)+ height(root->right);

        int ans = max(left, max(right, heightOfTree));
        return ans;
    }
};