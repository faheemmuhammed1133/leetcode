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
    int level = 0;
    void bfs(TreeNode *node){
        queue<TreeNode*> que;
        que.push(node);
        while(!que.empty()){
            int size = que.size();
            while(size-- > 0){
                TreeNode* rem = que.front();
                que.pop();

                if(rem->left!=nullptr){
                    que.push(rem->left);
                }if(rem->right!=nullptr){
                    que.push(rem->right);
                }
            }
            level++;
        }
    }

    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;

        bfs(root);
        return level;
    }
};