//Brute force 
// Approach 1: Brute Force (O(n * k))
// Check all substrings of length k and count the number of vowels.
// Update the maximum vowel count found.
// Time Complexity: O(n⋅k), where n is the length of s.
// class Solution {
// public:
// bool isVowel(char ch) {
//     return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
// }

// int maxVowels(string s, int k) {
//     int maxCount = 0;
    
//     for (int i = 0; i <= s.size() - k; i++) {
//         int count = 0;
//         for (int j = i; j < i + k; j++) {
//             if (isVowel(s[j])) count++;
//         }
//         maxCount = max(maxCount, count);
//     }
    
//     return maxCount;
// }
// };



//Sliding window - Separate function to check vowel
class Solution {
public:
    bool isVowel(char &ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    
    int maxVowels(string s, int k) {
        int n = s.length();
        
        int maxV  = 0;
        int count = 0;
        int i = 0, j = 0;
        
        while(j < n) {
            
            if(isVowel(s[j]))
                count++;
            
            if(j-i+1 == k) {
                maxV = max(maxV, count);
                if(isVowel(s[i]))
                    count--;
                i++;
            }
            
            j++;
        }
        
        return maxV;
    }
};