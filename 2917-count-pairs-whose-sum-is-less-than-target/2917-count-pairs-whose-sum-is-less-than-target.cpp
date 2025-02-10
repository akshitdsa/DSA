class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1, count = 0;

    while (left < right) {
        if (arr[left] + arr[right] < target) {
            count += (right - left);  // All pairs (left, left+1) to (left, right) are valid
            left++;  // Move left pointer forward
        } else {
            right--;  // Reduce sum by moving right pointer
        }
    }

    return count;
    }
};