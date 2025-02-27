//Brute Force Recursive way
// Time Complexity:
// Exponential (O(2^k)) due to recursion.
// Space Complexity:
// O(k) (recursion depth).
// class Solution {
// public:
// int maxScoreHelper(vector<int>& cardPoints, int k, int left, int right) {
//     if (k == 0) return 0; // Base case: No more cards to pick
//     return max(
//         cardPoints[left] + maxScoreHelper(cardPoints, k - 1, left + 1, right),  // Pick left
//         cardPoints[right] + maxScoreHelper(cardPoints, k - 1, left, right - 1)  // Pick right
//     );
// }

// int maxScore(vector<int>& cardPoints, int k) {
//     int n = cardPoints.size();
//     return maxScoreHelper(cardPoints, k, 0, n- 1);
// }
// };


//Sliding Window
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        
        // Calculate the initial sum of the first k elements
        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }
        
        int maxSum = sum;
        
        // Sliding window approach
        // Calculate the sum by sliding the window from the beginning to the end
        // and subtracting the first element of the window while adding the next element
        for (int i = k - 1, j = n - 1; i >= 0; i--, j--) {
            sum -= cardPoints[i];
            sum += cardPoints[j];
            maxSum = max(maxSum, sum);
        }
        
        return maxSum;
    }
};