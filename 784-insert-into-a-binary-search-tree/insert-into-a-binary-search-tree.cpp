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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            TreeNode* root=new TreeNode(val);
            return root;
        }
        TreeNode* ptr=root;
        if(val > ptr->val || val== ptr->val ){
            if(ptr->right){
                insertIntoBST(ptr->right,val);
            }else{
                TreeNode* temp=new TreeNode(val);
                ptr->right=temp;
            }
        }else {
            if(ptr->left){
                insertIntoBST(ptr->left,val);
            }else{
                TreeNode* temp=new TreeNode(val);
                ptr->left=temp;
            }
        }
        return root;
}
};