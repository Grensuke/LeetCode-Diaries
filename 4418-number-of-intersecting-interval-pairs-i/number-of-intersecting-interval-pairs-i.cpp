class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        int ans = 0;
        for (int i = 0; i < in.size(); i++) {
            for (int j = i+1; j < in.size(); j++) {
                if (in[j][0] <= in[i][1]) ans++;
            }
        }
        return ans;
    }
};