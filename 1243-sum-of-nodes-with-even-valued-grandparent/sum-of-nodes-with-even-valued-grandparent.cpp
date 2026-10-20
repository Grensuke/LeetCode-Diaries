class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        // Kirin!!!!
        int ans = 0;
        dfs(root, ans, 0, 0);
        return ans;
    }
    void dfs(TreeNode* root, int& ans, bool c, bool gc) {
        if (!root) return;
        if (c) ans += root->val;
        c = gc;
        if (root->val%2 == 0) gc = true;
        else gc = false;
        dfs(root->left, ans, c, gc);
        dfs(root->right, ans, c, gc);
    }
};