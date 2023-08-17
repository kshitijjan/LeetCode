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
    void toGST(TreeNode* root, int &sum){

        if(root == NULL){
            return;
        }
        toGST(root->right, sum);
        root->val += sum;
        sum = root->val;
        toGST(root->left, sum);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {

        int sum = 0;
        toGST(root, sum);        

        return root;
    }
};