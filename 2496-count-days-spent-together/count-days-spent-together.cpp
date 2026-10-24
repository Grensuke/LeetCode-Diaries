class Solution {
public:
    int countDaysTogether(string aA, string lA, string aB, string lB) {
        // yarre yarre
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int ans = 0;
        int am1 = stoi(aA.substr(0,2)), am2 = stoi(lA.substr(0,2));
        int bm1 = stoi(aB.substr(0,2)), bm2 = stoi(lB.substr(0,2));
        int ad1 = stoi(aA.substr(3,2)), ad2 = stoi(lA.substr(3,2));
        int bd1 = stoi(aB.substr(3,2)), bd2 = stoi(lB.substr(3,2));
        cout << bd1 << " " << bd2 << endl;
        for (int i = 0; i < 12; i++) {
            int month = i+1;
            for (int j = 0; j < days[i]; j++) {
                int day = j+1;
                bool a=0,b=0;
                if (month >= am1 && month <= am2) {
                    if (month == am1 && day < ad1) continue;
                    else if (month == am2 && day > ad2) continue;
                    a = 1;
                }
                if (month >= bm1 && month <=bm2) {
                    if (month == bm1 && day < bd1) continue;
                    else if (month == bm2 && day > bd2) continue;
                    b = 1;
                }
                if (a&&b) ans++;
            }
        }
        return ans;
    }
};