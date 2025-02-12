//Brute Force

// class Solution {
// public:
//     vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
//         int n = nums1.size();
//         int m = nums2.size();
//         vector<vector<int>> result;
//         for(auto &row1 : nums1)
//         {
//             bool found = false;
//             for(auto &row2 : nums2)
//             {
//                 if(row1[0]==row2[0])
//                 {
//                     result.push_back({row1[0],row1[1]+row2[1]});
//                     found = true;
//                     break;
//                 }
//             }
//             if(!found)
//             {
//                 result.push_back(row1);
//             }
//         }
//         for(auto &row2:nums2)
//         {
//             bool found = false;
//             for(auto &row1:nums1)
//             {
//                 if(row2[0]==row1[0])
//                 {
//                     found = true;
//                     break;
//                 }
//             }
//             if(!found)
//             {
//                 result.push_back(row2);
//             }
//         }
//         return result;
//     }
// };

//Using HashMap
// class Solution {
// public:
//     vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
//     //     map<int,int>mp;
//     //     vector<vector<int>> result;
//     //     for(auto & el :nums1)
//     //     {
//     //         mp[el[0]] +=el[1];
//     //     }
//     //     for(auto &el :nums2)
//     //     {
//     //         mp[el[0]] +=el[1];
//     //     }
//     //     for(auto &p: mp)
//     //     {
//     //         result.push_back({p.first,p.second});
//     //     }
//     //     return result;
//     //}
//      map<int, int> mergedMap;

//         // Traverse the first array and populate the map.
//         for (const auto& pair : nums1) {
//             // Extract the ID.
//             int id = pair[0];
//             // Extract the value.
//             int value = pair[1];
//             // Add the value to the map for the corresponding ID.
//             mergedMap[id] += value;
//         }

//         // Traverse the second array and update the map.
//         for (const auto& pair : nums2) {
//             // Extract the ID.
//             int id = pair[0];
//             // Extract the value.
//             int value = pair[1];
//             // Add the value to the map for the corresponding ID.
//             mergedMap[id] += value;
//         }

//         // Prepare the result vector.
//         vector<vector<int>> result;

//         // Traverse the map to create the final merged array.
//         for (const auto& entry : mergedMap) {
//             // Get the ID.
//             int id = entry.first;
//             // Get the summed value for this ID.
//             int value = entry.second;
//             // Add the pair to the result vector.
//             result.push_back({id, value});
//         }

//         // Return the result vector.
//         return result;
//     }
//     };

//Optimal 
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n= nums1.size();
        int m= nums2.size();
        int i=0;
        int j=0;
        vector<vector<int>> result;
        while(i<n && j<m)
        {
            if(nums1[i][0]==nums2[j][0])
            {
                result.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
                i++;
                j++;
            }
            else if(nums1[i][0]<nums2[j][0])
            {
                result.push_back(nums1[i]);
                i++;
            }
            else
            {
                result.push_back(nums2[j]);
                j++;
            }
        }
            while(i<n)
            {
                result.push_back(nums1[i]);
                i++;
            }
            while(j<m)
            {
                result.push_back(nums2[j]);
                j++;
            }
        return result;
    }
};