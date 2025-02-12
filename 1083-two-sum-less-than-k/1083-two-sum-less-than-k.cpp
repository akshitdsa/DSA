// class Solution {
// public:
//     int twoSumLessThanK(vector<int>& nums, int k) {
//         int answer = -1;
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 int sum = nums[i] + nums[j];
//                 if (sum < k) {
//                     answer = max(answer, sum);
//                 }
//             }
//         }
//         return answer;
//     }
// };
class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int answer = -1;
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum < k) {
                answer = max(answer, sum);
                left++;
            } else {
                right--;
            }
        }
        return answer;
    }
};
