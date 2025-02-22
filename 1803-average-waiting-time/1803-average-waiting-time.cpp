class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double totalwaitTime =0;
        int currTime =0;
        for(auto & vec :customers)
        {
            int arrivalTime = vec[0];
            int cookingTime = vec[1];
            if(currTime < arrivalTime)
            {
                currTime = arrivalTime;
            }
            int waitTime = currTime + cookingTime-arrivalTime;
            totalwaitTime +=waitTime;
            currTime += cookingTime;
        }
        return totalwaitTime/n;
    }
};