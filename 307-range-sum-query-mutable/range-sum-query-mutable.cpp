class NumArray {
public:
    vector<int> arr, fen;
    int n;
    NumArray(vector<int>& nums) {
        // Genkai koe
        n = nums.size();
        arr.assign(n, 0);
        fen.assign(n+1, 0);
        for (int i = 0; i < n; i++) update(i, nums[i]);
    }
    
    void update(int index, int val) {
        int nw = val - arr[index];
        arr[index] = val;
        index++;
        while (index <= n) {
            fen[index] += nw;
            index += index&-index;
        }
    }
    
    int pref_sum(int i) {
        int sum = 0;
        while (i) {
            sum += fen[i];
            i -= i&-i;
        }
        return sum;
    }

    int sumRange(int left, int right) {
        return pref_sum(right+1)-pref_sum(left);
    }

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */