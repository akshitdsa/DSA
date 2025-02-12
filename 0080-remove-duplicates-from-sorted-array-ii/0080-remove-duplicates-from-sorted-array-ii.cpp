class Solution {
public:
     int removeDuplicates(vector<int>& nums) {
    // // 2pointer approach
	// int n =nums.size();
    //     int i = 0;
    //     for(auto e : nums){
    //          if(i==0||i==1||nums[i-2] != e){
    //              nums[i] = e;
    //              i+=1;
    //          }
    //     }
    //     return i;
    // }
    int n= nums.size();
    int i=2;
    int e=2;
    if(n<3)
        return n;
    while(e<n)
    {
        if(nums[i-2] != nums[e])
        {
            nums[i] = nums[e];
            i++;
        }
        e++;
    }
    return i;
     }
};