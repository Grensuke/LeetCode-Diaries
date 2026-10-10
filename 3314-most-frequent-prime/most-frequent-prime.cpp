class Solution {
public:
    bool valid(int x, int y, int m, int n) {
        if (x >= 0 && x < m && y >= 0 && y < n) return 1;
        return 0;
    }
    bool isp(int n) {
        if (n <= 1) return 0;
        if (n == 2 || n == 3) return 1;
        if (n%2 == 0 || n%3 == 0) return 0;
        for (int i = 5; i*i <= n; i += 6) {
            if (n%i == 0  || n%(i+2) == 0) return 0;
        }
        return 1;
    }
    int mostFrequentPrime(vector<vector<int>>& mat) {
        map<int, int> f;
        vector<int> x = {1,-1,0,0,1,1,-1,-1};
        vector<int> y = {0,0,1,-1,1,-1,1,-1};
        int m = mat.size(), n = mat[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < 8; k++) {
                    int curx = i, cury = j;
                    int num = mat[i][j];
                    while(valid(curx+x[k],cury+y[k],m,n)) {
                        curx += x[k];
                        cury += y[k];
                        num = num*10 + mat[curx][cury];;
                        if (isp(num)) f[num]++;
                    }
                }
            }
        }
        if (f.empty()) return -1;
        int maxi = 0, ans = 0;
        for (auto &i : f) {
            if (i.second >= maxi) {
                ans = i.first;
                maxi = i.second;
            }
        }
        return ans;
    }
};