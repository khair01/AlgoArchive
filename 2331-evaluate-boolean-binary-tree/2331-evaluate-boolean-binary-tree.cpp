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
    bool evaluateTree(TreeNode* root) {
        function<bool(TreeNode*)> f = [&](TreeNode* node) 
        {
            if (!node->left && !node->right) return node->val == 1;
            bool left = f(node->left);
            bool right = f(node->right);
            return node->val == 2 ? left || right : left && right;
        };
        return f(root);
    }
};