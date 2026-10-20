class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        // Tatakae Tatakae
        TreeNode* ans = NULL;
        dfs(root, ans, val);
        return ans;
    }
    void dfs(TreeNode* root, TreeNode*& ans, int val) {
        if (!root) return;
        if (root->val == val) {
            ans = root;
            return;
        }
        if (val < root->val) dfs(root->left, ans, val);
        else dfs(root->right, ans, val);
    }
};