class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // Now Don't be angry at me. Peace. Waiting for next placement prep question :)
        int cur = -1;
        for (int i = arr.size()-1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = cur;
            cur = max(cur, temp);
        }
        return arr;
    }
};