class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        // If there is now way. Make your own way!! Make your own kind of tea :D....
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            vector<int> temp;
            int x = nums[i];
            while(x) {
                temp.push_back(x%10);
                x /= 10;
            }
            for (int j = temp.size()-1; j >= 0; j--) ans.push_back(temp[j]);
        }
        return ans;
    }
};