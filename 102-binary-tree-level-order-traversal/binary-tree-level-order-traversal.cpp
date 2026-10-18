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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // Ryokai!!!!
        if (root == NULL) return {};
        vector<vector<int>> ans;
        vector<int> temp;
        queue<TreeNode*> q;
        q.push(root);
        int cnt = 0, cp = 1;
        while(!q.empty()) {
            TreeNode* cur = q.front();
            cnt++;
            temp.push_back(cur->val);
            q.pop();
            if (cur->left != NULL) {
                q.push(cur->left);
            }
            if (cur->right != NULL) {
                q.push(cur->right);
            }
            if (cnt == cp) {
                ans.push_back(temp);
                temp = {};
                cp = q.size();
                cnt = 0;
            }
        }
        return ans;
    }
};