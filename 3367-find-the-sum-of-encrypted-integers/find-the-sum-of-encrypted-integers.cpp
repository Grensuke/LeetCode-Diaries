class Solution {
public:
    int req(int n) {
        int ans = n%10, cnt = 0;
        while(n) {
            ans = max(ans,n%10);
            n /= 10;
            cnt++;
        }
        int res = 0;
        while (cnt--) res = res*10+ans;
        return res;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans += req(nums[i]);
        }
        return ans;
    }
};