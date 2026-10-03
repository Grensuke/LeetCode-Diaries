class Solution {
public:
    string reorganizeString(string s) {
        map<char,int> f1;
        int n = s.size();
        for (char &c : s) f1[c]++;
        map<int, vector<char>, greater<int>> f;
        for (auto &i : f1) f[i.second].push_back(i.first);
        
        string ans = s;
        int ind = 0;
        for (auto & i : f) {
            int frq = i.first;
            if (frq > (n+1)/2) return "";
            vector<char> chr = i.second;
            for (int j = 0; j < chr.size(); j++) {
                for (int k = 0; k < frq; k++) {
                    ans[ind%n] = chr[j];
                    ind += 2;
                    if (ind >= n && (n%2) == 0) {
                        ind = (ind+1)%n;
                    }
                }
            }
        }
        return ans;
    }
};