class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        // Tatakae Tatakae!!
        queue<TreeNode*> q;
        q.push(root);
        int cnt = 0;
        while(!q.empty()) {
            int sz = q.size();
            vector<TreeNode*> level;
            for (int i = 0; i < sz; i++) {
                TreeNode* cur = q.front();
                level.push_back(cur);
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            if (cnt%2) {
                vector<int> rev;
                for (int i = 0; i < sz; i++) rev.push_back(level[i]->val);
                reverse(rev.begin(),rev.end());
                for (int i = 0; i < sz; i++) level[i]->val = rev[i];
            }
            cnt++;
        }
        return root;
    }
};