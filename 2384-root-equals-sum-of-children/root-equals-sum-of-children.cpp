class Solution {
public:
    bool checkTree(TreeNode* root) {
        // soka sodana sokamona
        return root->val == root->left->val + root->right->val;
    }
};