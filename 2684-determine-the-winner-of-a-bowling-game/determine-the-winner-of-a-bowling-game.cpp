class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        // Honki no kakugo tte yatsu o misete yaru yo!
        int a = 0, b = 0;
        for (int i = 0; i < p1.size(); i++) {
            bool x=0,y=0;
            if (i-1 >= 0) {
                if (p1[i-1] == 10) x = 1;
                if (p2[i-1] == 10) y = 1;
            }
            if (i-2 >= 0) {
                if (p1[i-2] == 10) x = 1;
                if (p2[i-2] == 10) y = 1;
            }
            if (x) a += 2*p1[i];
            else a += p1[i];
            if (y) b += 2*p2[i];
            else b += p2[i];
        }
        if (a > b) return 1;
        else if (b > a) return 2;
        return 0;
    }
};