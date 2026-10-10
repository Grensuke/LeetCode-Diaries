class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& c) {
        int x = 0, y = 0;
        for (int i = 0; i < c.size(); i++) {
            if (c[i][0] == 'U') x--;
            else if (c[i][0] == 'D') x++;
            else if (c[i][0] == 'L') y--;
            else y++;
        }
        return n*x+y;
    }
};