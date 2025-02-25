// // Brute Force
// class Solution {
// public:
//     string shortestBeautifulSubstring(string s, int k) {
//         int n = s.size();

//         string ans;
//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 int c = 0;
//                 for (int k = i; k <= j; k++) {
//                     if (s[k] == '1') {
//                         c++;
//                     }
//                     if (c == k) {
//                         string str = s.substr(i, j - i + 1);
//                         if (ans.size() == 0 || str.size() < ans.size()) {
//                             ans = str;
//                         } else if (ans.size() == str.size()) {
//                             ans = min(ans, str);
//                         }
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };
//sliding window
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int i=0;
        int j=0;
        int c=0;
        string ans = "";
        while(j<n){
            if(s[j]=='1') c++;
            while(i<=j && c==k){
                string str = s.substr(i,j-i+1);
                if(ans.size()==0 || str.size()<ans.size()){
                    ans = str;
                } else if(ans.size()== str.size()){
                    ans = min(ans,str);
                }
                if(s[i]=='1') c--;
                i++;
            }
            j++;
        }
        return ans;
    }
};