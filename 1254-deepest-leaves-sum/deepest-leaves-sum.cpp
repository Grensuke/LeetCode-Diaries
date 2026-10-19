class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        // Chidori!!!
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int sz = q.size(), sum = 0;
            for (int i = 0; i < sz; i++) {
                TreeNode* cur = q.front();
                sum += cur->val;
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            ans = sum;
        }
        return ans;
    }
};