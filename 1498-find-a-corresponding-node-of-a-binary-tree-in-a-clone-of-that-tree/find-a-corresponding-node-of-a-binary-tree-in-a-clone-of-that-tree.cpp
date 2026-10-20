class Solution {
public:
    TreeNode* ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        // Chidori stream.....
        dfs(original, cloned, target);
        return ans;
    }
    void dfs(TreeNode*original, TreeNode*cloned, TreeNode* target) {
        if (!cloned) return;
        if (original == target) {
            ans = cloned;
            return;
        }
        getTargetCopy(original->left, cloned->left, target);
        getTargetCopy(original->right, cloned->right, target); 
    }
};