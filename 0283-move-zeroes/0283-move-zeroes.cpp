// class Solution {
// public:
//       void moveZeroes(vector<int>& nums) {
//         int k=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=0){
//                 nums[k++]=nums[i];
//             }
//         }
//         for(int i=k;i<nums.size();i++){
//             nums[i]=0;
//         }
//       }
// };
class Solution {
public:
      void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j=0;
        while(j<n)
        {
            if(nums[j]!=0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
            j++;
        }
      }
};