// //brute Force
// class Solution {
// public:
// int removeDuplicates(int arr[], int n) {
//     if (n == 0) return 0; // Edge case: empty array

//     vector<int> temp; // Temporary array to store unique elements

//     for (int i = 0; i < n; i++) {
//         if (temp.empty() || temp.back() != arr[i]) { // Check if unique
//             temp.push_back(arr[i]);
//         }
//     }

//     // Copy unique elements back to the original array
//     for (int i = 0; i < temp.size(); i++) {
//         arr[i] = temp[i];
//     }

//     return temp.size(); // Return new size
// }
// };

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n = nums.size();
        int i = 0;
        int j = 1;

        while (j < n) {
            if (nums[i] != nums[j]) {//got a unique element
                 i++;
                nums[i] = nums[j];
               
            }
            j++; //to find the unique element
        }

        return i + 1;
    }
};