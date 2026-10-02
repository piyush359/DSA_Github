// class Solution {
// public:
//     string removeKdigits(string num, int k) {

//         stack<char> st;
//         string ans;

//         for (int i = 0; i < num.size(); i++) {
//             while (!st.empty() && k > 0 && st.top() > num[i]) {
//                 st.pop();
//                 k--;
//             }

//             st.push(num[i]);
//         }

//         while (!st.empty() && k > 0) {
//             st.pop();
//             k--;
//         }

//         while (!st.empty()) {
//             ans += st.top();
//             st.pop();
//         }

//         reverse(ans.begin(), ans.end());

//         stack<char> res;

//         for (int i = 0; i < ans.size(); i++) {
//             if (res.empty() && ans[i] == '0') {
//                 continue;
//             }

//             res.push(ans[i]);
//         }

//         ans = "";

//         while (!res.empty()) {
//             ans += res.top();
//             res.pop();
//         }

//         reverse(ans.begin(), ans.end());

//         if (ans.empty()) {
//             return "0";
//         }

//         return ans;
//     }
// };
