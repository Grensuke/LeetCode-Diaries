class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // In problemset sort by acceptance rate and filter only easy and
        // the topics you know. Read the question and if you feel like you can
        // solve it, solve it. If not skip the question and go to the next one.
        // This is how I found easy problems at start.
        map<int, int> f1;
        map<int, int> f2;
        for (auto &i : nums1) f1[i]++;
        for (auto &i : nums2) f2[i]++;
        vector<int> ans;
        for (auto &i : f1) {
            int x = min(i.second,f2[i.first]);
            while(x--) {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};