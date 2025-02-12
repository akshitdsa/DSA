//Using extra space
// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> result;
//         for(int i = 0;i<n;i++)
//         {
//              if(nums[i]%2==0)
//             {
//                 result.push_back(nums[i]);
//             }

//         }
//         for(int i = 0;i<n;i++)
//         {
//              if(nums[i]%2==1)
//             {
//                 result.push_back(nums[i]);
//             }

//         }
//         return result;
//      }
// };

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        int j=0;
        while(i<n)
        {
            if(nums[i]%2==0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
        return nums;
    }
};