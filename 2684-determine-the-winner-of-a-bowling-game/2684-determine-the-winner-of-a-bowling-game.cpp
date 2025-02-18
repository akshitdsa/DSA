//Optimezed Approach
//TC:O(n);
//SC:O(1);
// class Solution {
// public:
//     int isWinner(vector<int>& player1, vector<int>& player2) {
//     int score1 = calculateScore(player1);
//     int score2 = calculateScore(player2);

//     return score1==score2 ?0 : (score1>score2?1:2);
//     }

//     int calculateScore(vector<int>& player) {
//     int n = player.size();
//     int score = 0;
//     int last10Index =-1;
//     for (int i = 0; i < n; i++) {
//         if(last10Index !=-1 && i-last10Index <=2)
//         {
//             score +=player[i]+player[i];
//         }
//         else
//         {
//             score+=player[i];
//         }
//         if(player[i]==10)
//         {
//             last10Index =i;
//         }
//     }
//     return score;
// }
// };

//BruteForce Approach
//TC:O(n);
//SC:O(1);
class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
    int score1 = calculateScore(player1);
    int score2 = calculateScore(player2);

    return score1 == score2 ? 0 : (score1>score2?1:2);
    }
    
    int calculateScore(vector<int>& player) {
    int n = player.size();
    int score = 0;
    for (int i = 0; i < n; i++) {
       bool doublePoints = (i>0 && player[i-1]==10 || i>1 && player[i-2]==10);
       score  += (doublePoints ? 2*player[i]:player[i]);
    }
    return score;
}
};

