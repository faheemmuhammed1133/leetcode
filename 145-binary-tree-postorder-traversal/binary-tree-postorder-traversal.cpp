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
public:
    vector<int> a;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root){
            if(root->left){
                postorderTraversal(root->left);
            }
            if(root->right){
                postorderTraversal(root->right);
            }
            a.push_back(root->val);
        }
        return a;
    }
};