class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        // Nandemo nandemo nandemo
        if (root->val <= 1) return root->val;
        if (root->val == 2) return evaluateTree(root->left) ||  evaluateTree(root->right);
        return evaluateTree(root->left) &&  evaluateTree(root->right);
    }
};