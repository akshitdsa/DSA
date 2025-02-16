//BruteForce
//We iterate from 1 to n, performing O(1) operations per iteration.
//Time Complexity: O(n).
//Space Complexity: O(n), as we store the results in a vector.
// class Solution {
// public:
//     vector<string> fizzBuzz(int n) {
//           vector<string> result;
//     for (int i = 1; i <= n; i++) {
//         if (i % 3 == 0 && i % 5 == 0)
//             result.push_back("FizzBuzz");
//         else if (i % 3 == 0)
//             result.push_back("Fizz");
//         else if (i % 5 == 0)
//             result.push_back("Buzz");
//         else
//             result.push_back(to_string(i));
//     }
//     return result;
//     }
// };

//pproach 2: Optimized String Concatenation
//Instead of checking all conditions separately, we initialize an empty string and concatenate "Fizz" and "Buzz" when appropriate.
//Still O(n), but slightly more efficient as we avoid redundant condition checks.
class Solution {
public:
vector<string> fizzBuzz(int n) {
    vector<string> result;
    for (int i = 1; i <= n; i++) {
        string str = "";
        if (i % 3 == 0) str += "Fizz";
        if (i % 5 == 0) str += "Buzz";
        if (str.empty()) str = to_string(i);
        result.push_back(str);
    }
    return result;
}
};

//Using HashMap (unordered_map)
//Use a HashMap (unordered_map<int, string>) to store the mapping:
//3 -> "Fizz"
//5 -> "Buzz"
//Iterate from 1 to n, and check which keys in the map divide i.
//Append the corresponding value(s) ("Fizz" or "Buzz") to the output.
//If no key divides i, append the number itself.
//Time Complexity: O(n)
//Space Complexity: O(n)
// class Solution {
// public:
// vector<string> fizzBuzz(int n) {
//     vector<string> result;
    
//     // Step 1: Define a HashMap with {divisor, word}
//     unordered_map<int, string> mp = {{3, "Fizz"}, {5, "Buzz"}};

//     // Step 2: Loop from 1 to n
//     for (int i = 1; i <= n; i++) {
//         string str = "";

//         // Step 3: Check divisibility using the map
//         for (auto& pair : mp) {
//             if (i % pair.first == 0) {
//                 str += pair.second;
//             }
//         }
//         // Step 4: If no match, add number
//         if (str.empty()) {
//             str += to_string(i);
//         }

//         // Step 5: Store result
//         result.push_back(str);
//     }

//     return result;
// }
// };