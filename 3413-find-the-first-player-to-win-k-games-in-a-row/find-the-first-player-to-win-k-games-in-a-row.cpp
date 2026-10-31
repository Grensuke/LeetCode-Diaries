class Solution {
public:
    int findWinningPlayer(vector<int>& s, int k) {
        // The system uses me and I use the system
        int n = s.size();
        if (k >= n) {
            return max_element(s.begin(),s.end()) - s.begin();
        }   
        int ans = 0, val = s[0], cnt = 0;
        for (int i = 1; i < n; i++) {
            if (val > s[i]) cnt++;
            else {
                val = s[i];
                cnt = 1;
                ans = i;
            }
            if (cnt == k) return ans;
        }
        return max_element(s.begin(),s.end()) - s.begin();
    }
};