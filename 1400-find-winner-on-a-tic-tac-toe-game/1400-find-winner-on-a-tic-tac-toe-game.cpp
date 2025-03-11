//Brute Forece

// class Solution {
// public:
//     string tictactoe(vector<vector<int>>& moves) {
//         vector<vector<char>> board(3, vector<char>(3, '.')); // 3x3 grid filled with '.'
        
//         // Fill the board with moves
//         for (int i = 0; i < moves.size(); i++) {
//             int row = moves[i][0], col = moves[i][1];
//             board[row][col] = (i % 2 == 0) ? 'A' : 'B'; // 'A' for even index, 'B' for odd
            
//             // Check if this player wins
//             if (checkWin(board, board[row][col])) {
//                 return string(1, board[row][col]); // Convert char to string ("A" or "B")
//             }
//         }
        
//         return (moves.size() == 9) ? "Draw" : "Pending";
//     }
    
// private:
//     bool checkWin(vector<vector<char>>& board, char player) {
//         // Check rows, columns, and diagonals
//         for (int i = 0; i < 3; i++) {
//             if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true; // Row
//             if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true; // Column
//         }
//         if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true; // Main Diagonal
//         if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true; // Anti Diagonal
        
//         return false;
//     }
// };
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> row(3,0),col(3,0);
        int diag=0;
        int antidiag=0;
        for(int i=0;i<moves.size();i++){
            int x=moves[i][0];
            int y=moves[i][1];
            if(i%2==0){
                row[x]+=1;
                col[y]+=1;
                if(x==y) diag++;
                if(x==2-y) antidiag++;
            }
            else{
                row[x]-=1;
                col[y]-=1;
                if(x==y) diag--;
                if(x==2-y) antidiag--;
            }
            if(row[x]==3 || col[y]==3 || diag==3 || antidiag==3) return "A";
            if(row[x]==-3 || col[y]==-3 || diag==-3 || antidiag==-3) return "B";
        }
        if(moves.size()==9) return "Draw";
        return "Pending";
    }
};
