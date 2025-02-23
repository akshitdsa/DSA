//Brute Force
//Time Complexity
//Loop through each cell (O(m × n))
//Counting 1s in row (O(n))
//Counting 1s in column (O(m))
//Total = O(m × n × (m + n))
// class Solution {
// public:
//     vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
//          int m = grid.size(), n = grid[0].size();
//         vector<vector<int>> diff(m, vector<int>(n, 0));

//     // Loop through each cell
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             int onesRow = 0, onesCol = 0;

//             // Count 1s in the row
//             for (int k = 0; k < n; k++) 
//                 onesRow += grid[i][k];

//             // Count 1s in the column
//             for (int k = 0; k < m; k++) 
//                 onesCol += grid[k][j];

//             // Apply formula
//             diff[i][j] = 2 * (onesRow + onesCol) - (m + n);
//         }
//     }
//     return diff;
// }
// };

//Approach - Keep count of ones and zeros in row/col
//T.C : O(m*n)
//S.C : O(m+n) -> Not considering the result space
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<int> rowOnes(m, 0);
        vector<int> colOnes(n, 0);
        
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                
                if(grid[i][j] == 1) {
                    rowOnes[i]++;
                    colOnes[j]++;
                } 
            }
        }
        
        vector<vector<int>> diff(m, vector<int>(n, 0));
        
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                int onesRowi = rowOnes[i];
                int onesColj = colOnes[j];
                
                int zerosRowi = n-onesRowi;
                int zerosColj = m-onesColj;
                
                diff[i][j] = onesRowi + onesColj - zerosRowi - zerosColj;
            }
        }
        
        return diff;
    }
};

