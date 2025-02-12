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