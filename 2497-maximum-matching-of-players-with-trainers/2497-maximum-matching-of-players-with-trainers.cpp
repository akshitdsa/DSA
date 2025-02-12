class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
      int m = players.size();
       int n = trainers.size();
       int i=0;
       int j=0;
       sort(players.begin(),players.end());
       sort(trainers.begin(),trainers.end());
       while(i<m && j<n)
       {
        if(players[i]<=trainers[j])
        {
            i++;
        }
        j++;
       } 
       return i;
    }
};