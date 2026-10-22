class Solution {
public:
    int minOperations(vector<int>& nums) {
        // Akiramenai...
        if (is_sorted(nums.begin(),nums.end())) return 0;
        if (is_sorted(nums.rbegin(),nums.rend())) return 1;
        int n = nums.size();
        if (n == 2) return 1;
        int cnt = 0;
        int x=-1,y=-1;
        if(abs(nums[0]-nums[n-1]) == 1) cnt++;
        for (int i = 1; i < n; i++) {
            if (abs(nums[i]-nums[i-1]) == 1) cnt++;
            if(nums[i] == 0) x = i;
            if (nums[i] == n-1) y = i;
        }
        if (cnt < n-1) return -1;
        if (x > y) {
            return min(x,n-y+1);
        }
        return min(y+1, n-x);
    }
};