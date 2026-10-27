class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        // Idk I am dealing with multiple things at once.
        for (int i = 1; i < cost.size(); i++) cost[i] = min(cost[i],cost[i-1]);
        return cost;
    }
};