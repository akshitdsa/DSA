//Using Set
//TC:O(n) to insert elements into the set.
//O(1) lookup for set operations.
//Total Complexity: O(n) 
// class Solution {
// public:
//     int minimumOperations(vector<int>& nums) {
//         set<int> uniqueElements;
//     for (int num : nums) {
//         if (num > 0) uniqueElements.insert(num);
//     }
//     return uniqueElements.size();
//     }
// };

//Using Sorting (Alternative)
//TC:Sorting → O(n log n)
//Traversal → O(n)
//Total Complexity: O(n log n) 
class Solution {
public:
int minimumOperations(vector<int>& nums) {
    sort(nums.begin(), nums.end());  // O(n log n)
    int operations = 0;
    int prev = 0;
    
    for (int num : nums) {
        if (num > 0 && num != prev) {
            operations++;
            prev = num;
        }
    }
    return operations;
}
};