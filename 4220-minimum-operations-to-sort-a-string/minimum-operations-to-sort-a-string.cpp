class Solution {
public:
    int minOperations(string s) {
        // Amaterasu...
        if (is_sorted(s.begin(),s.end())) return 0;
        if (s.size() == 2) return -1;
        string m=s,q=s;
        sort(m.begin(),m.end()-1);
        sort(q.begin()+1,q.end());
        if (is_sorted(m.begin(),m.end()) || is_sorted(q.begin(),q.end())) return 1;
        sort(q.begin(),q.end()-1);
        sort(m.begin()+1,m.end());
        if (is_sorted(m.begin(),m.end()) || is_sorted(q.begin(),q.end())) return 2;
        return 3;
    }
};