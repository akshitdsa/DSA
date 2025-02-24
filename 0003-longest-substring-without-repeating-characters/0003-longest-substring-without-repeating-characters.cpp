//Brute Force
//TC:(O(N2))
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//        int n = s.size(), maxLength = 0;
    
//     for (int i = 0; i < n; i++) {
//         unordered_set<char> uniqueChars;
//         for (int j = i; j < n; j++) {
//             if (uniqueChars.count(s[j])) break;  // Stop at duplicate
//             uniqueChars.insert(s[j]);
//             maxLength = max(maxLength, j - i + 1);
//         }
//     }

//     return maxLength;  
//     }
// };

//Sliding Window using set
//TC:O(N)
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//           int left = 0;
//           int right =0;
//         int maxLength = 0;
//         unordered_set<char> charSet;
//         while (right<s.length()) {
//             while (charSet.find(s[right]) != charSet.end()) {
//                 charSet.erase(s[left]);
//                 left++;
//             }

//             charSet.insert(s[right]);
//             maxLength = max(maxLength, right - left + 1);
//             right++;
//         }
        

//         return maxLength;    
//     }
//     };

    //Sliding Window using hashmap
//TC:O(N)
class Solution {
public:
int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> count; // Stores character frequency
    int left = 0, maxLength = 0;

    for (int right = 0; right < s.length(); right++) {
        count[s[right]]++; // Increase frequency of current character

        while (count[s[right]] > 1) { // If duplicate found
            count[s[left]]--; // Remove left character
            left++; // Move left pointer
        }

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;

}
};
