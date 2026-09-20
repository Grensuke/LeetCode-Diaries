class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& in) {
        long long n = in.size(), ans = 0;
        vector<int> sec;
        sort(in.begin(),in.end());
        for (int i = 0; i < n; i++) sec.push_back(in[i][0]);
        
        for (int i = 0; i < n; i++) {
            //cout << in[i][1] << endl;
            auto it = upper_bound(sec.begin(),sec.end(),in[i][1]);
            long long ind = it-sec.begin();
            long long x = i+1;
            //cout << ind << endl;
            ans += max(0*1LL,ind-x);
        }
        return ans;
    }
};