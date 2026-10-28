class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        // Genkai o Koete
        vector<vector<int>> arr;
        arr = board;
        int m = board.size(), n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int cur = 0;
                if (i != 0 && arr[i-1][j] == 1) cur++;
                if (i+1 < m && arr[i+1][j] == 1) cur++;
                if (j != 0 && arr[i][j-1] == 1) cur++;
                if (j+1 < n && arr[i][j+1] == 1) cur++;
                if (i-1 >= 0 && j-1 >= 0 && arr[i-1][j-1] == 1) cur++;
                if (i-1 >= 0 && j+1 < n && arr[i-1][j+1] == 1) cur++;
                if (i+1 < m && j-1 >= 0 && arr[i+1][j-1] == 1) cur++;
                if (i+1 < m && j+1 < n && arr[i+1][j+1] == 1) cur++;

                if (board[i][j] == 1 && (cur < 2 || cur > 3)) board[i][j] = 0;
                if (board[i][j] == 0 && cur == 3) board[i][j] = 1;
            }
        }
    }
};