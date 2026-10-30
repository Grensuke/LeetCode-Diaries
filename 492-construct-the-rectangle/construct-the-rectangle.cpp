class Solution {
public:
    vector<int> constructRectangle(int area) {
        // It didn't rain!!!!, good signs can't be seen!!!!
        int diff = INT_MAX, a = -1;
        
        for (int i = 1; i * i <= area; i++) {
            if (area%i == 0) {
                int x = i, y = area/i;
                if (abs(x-y) < diff) {
                    diff = abs(x-y);
                    a = x;
                }
            }
        }
        return {max(a,area/a),min(a,area/a)};
    }
};