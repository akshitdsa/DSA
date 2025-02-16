class Solution {
public:
     double minimumAverage(vector<int>& nums) {
        double avg = INT_MAX;
        int i = 0, j = nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i < j){
            avg = min(avg, (nums[i] + nums[j]) / 2.0);
            i++;
            j--;
        }
        return avg;   
    }
};
