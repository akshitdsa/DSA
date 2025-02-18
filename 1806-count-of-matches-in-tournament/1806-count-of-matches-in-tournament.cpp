//Approach-1 (Doing simple simulation asking in code)
//T.C : O(log(n))
//S.C : O(1)
// class Solution {
// public:
//     int numberOfMatches(int n) {
//         int result = 0;
        
//         while(n > 1) {
//             if(n%2 == 0) {
//                 result += n/2;
//                 n /= 2;
//             } else {
//                 result += (n-1)/2;
//                 n = ((n-1)/2) + 1;
//             }
//         }
        
//         return result;
//     }
// };


//Approach-2 (Using simple math)
//T.C : O(1)
//S.C : O(1)
class Solution {
public:
    int numberOfMatches(int n) {
        return n-1;
    }
};