class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int> f;
        for (int i = 0; i < nums.size(); i++) {
            f[nums[i]]++;
            if (f[nums[i]] > 2) return 0;
        }
        return 1;
    }
};