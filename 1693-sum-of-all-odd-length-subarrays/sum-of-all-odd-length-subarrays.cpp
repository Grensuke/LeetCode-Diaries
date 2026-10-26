class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        // I detest myself
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            int cnt = 1, sum = 0;
            for (int j = i; j < arr.size(); j++) {
                sum += arr[j];
                if (cnt%2) ans += sum;
                cnt++;
            }
        }
        return ans;
    }
};