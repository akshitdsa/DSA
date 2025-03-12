//Brute Force using Sorting and a Set
//Sorting takes O(N log N).
//Iterating through the array with two pointers takes O(N).
//Using a set for storing values takes O(1) per insertion on average.
// class Solution {
// public:
//     int distinctAverages(vector<int>& nums) {
//         sort(nums.begin(), nums.end());  // O(N log N)
//     unordered_set<double> avgSet;

//     int l = 0, r = nums.size() - 1;
//     while (l < r) {  // O(N)
//         double avg = (nums[l] + nums[r]) / 2.0;
//         avgSet.insert(avg);
//         l++;
//         r--;
//     }
//     return avgSet.size();
//     }
// };

//Optimal Approach: Using a Set Without Sorting
//Time Complexity
//Constructing a frequency array takes O(N).
//Finding min and max takes O(100) = O(1) since numbers are bounded.
//Using a set for unique averages takes O(1) per insertion.
//Thus, the overall time complexity is O(N).
class Solution {
public:
int distinctAverages(vector<int>& nums) {
    vector<int> freq(101, 0);
    for (int num : nums) freq[num]++;

    unordered_set<double> avgSet;
    int i = 0, j = 100;
    
    while (i <= j) {
        while (i <= j && freq[i] == 0) i++;  // Move to next non-zero element
        while (i <= j && freq[j] == 0) j--;  // Move to previous non-zero element
        
        if (i <= j) {
            double avg = (i + j) / 2.0;
            avgSet.insert(avg);
            freq[i]--;
            freq[j]--;
        }
    }
    return avgSet.size();
}
};