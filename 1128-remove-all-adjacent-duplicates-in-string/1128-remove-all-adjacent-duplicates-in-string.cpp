//Approach-1 (With stack)
class Solution {
 public:
string removeDuplicates(string s) {
        stack<char> st;
        int n = s.length();
        
        for(int i = 0;i<n;i++) {
            if(st.empty() || st.top() != s[i])
                st.push(s[i]);
            else
                st.pop();
        }
    
        string result = "";
        while(!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
//Appraoch-2 (Without stack)
// class Solution {
// public:
//     string removeDuplicates(string s) {
//         string result = "";
        
//         for(char &ch : s) {
//             if(result.empty() || result.back() != ch) {
//                 result.push_back(ch);
//             } else {
//                 result.pop_back();
//             }
//         }
        
//         return result;
//     }
// };