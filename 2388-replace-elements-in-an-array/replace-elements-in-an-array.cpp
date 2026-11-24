class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        // Thanks for saying that :)
        map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++) mp[nums[i]] = i;
        for (int i = 0; i < op.size(); i++) {
            nums[mp[op[i][0]]] = op[i][1];
            mp[op[i][1]] = mp[op[i][0]];
            mp[op[i][0]] = -1;
        }
        return nums;
    }
};