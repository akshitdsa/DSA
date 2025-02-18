
class Solution {
public:
    // Function to rearrange the array elements by grouping them into pairs in a specific manner
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size(); // Get the size of the input vector
        sort(nums.begin(), nums.end()); // Sort the numbers in non-decreasing order

        // Iterate through the sorted array and group elements into pairs by swapping adjacent elements
        for (int i = 0; i < n; i += 2) {
            // Swap the current element with the next element to form pairs
            swap(nums[i], nums[i + 1]);
        }

        return nums; // Return the modified array with elements rearranged into pairs
    }
};


