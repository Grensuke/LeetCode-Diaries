class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        // Kakatte koi!
        int ans = 0, maxi = root->val, mini = root->val;
        dfs(root, maxi, mini, ans);
        return ans;
    }
    void dfs(TreeNode* root,int maxi,int mini,int& ans) {
        if (!root) return;
        maxi = max(maxi, root->val);
        mini = min(mini, root->val);
        ans = max({ans, abs(maxi-root->val), abs(mini-root->val)});
        dfs(root->left, maxi, mini, ans);
        dfs(root->right, maxi, mini, ans);
    }
};