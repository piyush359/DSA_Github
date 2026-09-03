/*
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        int n=s.size();

        for (int i = 0; i < s.size(); i++) {
            st.push(s[i]);
        }

        s.erase(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            char a = st.top();
            st.pop();
            s.push_back(a);
        }
        
    }
};
*/