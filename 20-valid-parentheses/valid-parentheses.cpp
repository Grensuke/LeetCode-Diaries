class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char &c : s) {
            if (c == '(' || c == '{' || c == '[') st.push(c);
            else {
                if (st.empty()) return 0;
                cout << st.top() << " " << c << endl;
                if (c == ')' && st.top() != '(') return 0;
                else if (c == ']' && st.top() != '[') return 0;
                else if (c == '}' && st.top() != '{') return 0;
                st.pop();
            }
        }
        if (!st.empty()) return 0;
        return 1;
    }
};