class Solution {
public:
    vector<int> fen;
    vector<int> countSmaller(vector<int>& nums) {
        // Saikyou da!
        fen.assign(20002, 0);
        int n = nums.size();
        vector<int> ans(n);   
        for (int i = n-1; i >= 0; i--) {
            int cur = nums[i]+1e4+1;
            ans[i] = get(cur-1);
            update(cur,1);
        }
        return ans;
    }

    void update(int i, int val) {
        while (i < 20002) {
            fen[i] += val;
            i += i&-i;
        }
    }
    
    int get(int i) {
        int sum = 0;
        while (i) {
            sum += fen[i];
            i -= i&-i;
        }
        return sum;
    }
};