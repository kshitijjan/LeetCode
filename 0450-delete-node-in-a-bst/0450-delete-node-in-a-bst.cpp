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
    TreeNode* minVal(TreeNode* root){

        TreeNode* temp = root;
        if(temp == NULL){
            return NULL;
        }
        while(temp->left != NULL){
            temp = temp->left;
        }
        return temp;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return root;
        }

        if(root->val == key){

            //Leaf Node
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }
            //1 Child
            //Left
            if(root->left != NULL && root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            //Right
            if(root->left == NULL && root->right != NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            //2 Children
            if(root->left != NULL && root->right != NULL){
                int min = minVal(root->right)->val;
                root->val = min;
                root->right = deleteNode(root->right, min);
                return root;
            }


        }
        else if(root->val > key){
            root->left = deleteNode(root->left, key);
        }
        else{
            root->right = deleteNode(root->right, key);
        }
        return root;
    }
};