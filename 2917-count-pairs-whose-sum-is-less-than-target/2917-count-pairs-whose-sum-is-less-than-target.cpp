//Brute Force
//Time Complexity:O(N 2)
//Space Complexity: O(1)

class Solution {
public:
  int countPairs(vector<int>& arr, int target) {
    int count = 0;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] < target) {
                count++;
            }
        }
    }
    
    return count;
}
};
// Two pointer approach
//Time Complexity:O(NlogN)
////Space Complexity: O(1)

// class Solution {
// public:
//     int countPairs(vector<int>& arr, int target) {
//         sort(arr.begin(), arr.end());
//     int left = 0, right = arr.size() - 1, count = 0;

//     while (left < right) {
//         if (arr[left] + arr[right] < target) {
//             count += (right - left);  // All pairs (left, left+1) to (left, right) are valid
//             left++;  // Move left pointer forward
//         } else {
//             right--;  // Reduce sum by moving right pointer
//         }
//     }

//     return count;
//     }
// };