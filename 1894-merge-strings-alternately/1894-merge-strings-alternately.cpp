//Brute Force
// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         int n= word1.length();
//         int m = word2.length();
//         int i = 0, j = 0;
//         string ans = "";
//         while(i < n && j < m) {
//             ans += word1[i];
//             ans += word2[j];
//             i++;
//             j++;
//         }
//         while(i < n) {
//             ans += word1[i];
//              i++;
//         }
//         while(j < m) {
//             ans += word2[j]; 
//             j++;
//         }
//         return ans;
//     }
//};

//Optimized approach
class Solution {
public:
string mergeAlternately(string word1, string word2) {
    int n = word1.size(), m = word2.size();
    string result(n + m, ' ');  // Preallocate memory
    int i = 0, j = 0, k = 0;

    // Merge characters alternately
    while (i < n || j < m) {
        if (i < n) result[k++] = word1[i++];
        if (j < m) result[k++] = word2[j++];
    }
    
    return result;
}
};
