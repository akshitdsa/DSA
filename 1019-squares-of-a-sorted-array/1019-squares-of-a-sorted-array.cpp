//brute force 
class Solution {
public:
vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result;
    
    // Step 1: Square each element and store in result
    for(int i=0;i<nums.size();i++)
    {
        nums[i]=nums[i]*nums[i];
    }
    // Step 2: Sort the squared values
    sort(nums.begin(), nums.end());

    return nums;
}
};


// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//      int n= nums.size();
//      int i=0;
//      int j=n-1;
//      int k=n-1;
//      vector<int> result(n);
//      while(k>=0)
//      {
//         int a = nums[i]*nums[i];
//         int b = nums[j]*nums[j];
//         if(a>b)
//         {
//             result[k]=a;
//             i++;
//         }
//         else
//         {
//             result[k]=b;
//             j--;
//         }
//         k--;
//      }   
//      return result;
//     }
// };