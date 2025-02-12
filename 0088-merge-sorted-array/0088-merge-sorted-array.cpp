// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//          int i=0,j=0;
//         vector<int>v(m+n);
//         int k=0;
//         while(i<m and j<n){
            
//            if(nums1[i]<nums2[j])v[k++]=nums1[i],i++;
//            else {
//                v[k++]=nums2[j],j++;
//            }
//         }
//         while(i<m)v[k++]=nums1[i++];
//           while(j<n)v[k++]=nums2[j++];
        
//         for(int i=0;i<m+n;i++)nums1[i]=v[i];
//     }
// };

//Brute Force
//T.C:O((m+n)log(m+n))
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i=0;i<nums2.size();i++)
//         {
//             nums1[i+m] = nums2[i];
//         }
//         sort(nums1.begin(),nums1.end());
//     }
// };

//Using extra space
//T.C:O(n)
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = 0;
//         int j= 0;
//         int k = 0;
//         vector<int> result(m+n);
//         while(i<m && j<n)
//         {
//             if(nums1[i]<nums2[j])
//             {
//                 result[k]=nums1[i];
//                 k++;
//                 i++;
//             }
//             else
//             {
//                 result[k]= nums2[j];
//                 k++;
//                 j++;
//             }
//         }
//         while(i<m)
//         {
//              result[k]=nums1[i];
//                 k++;
//                 i++;
//         }
//         while(j<n)
//         {
//             result[k]= nums2[j];
//                 k++;
//                 j++;
//         }
//         for(int i=0;i<m+n;i++)
//         {
//             nums1[i]=result[i];
//         }

//     }
// };

//Inplace
//T.C:O(m+n)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j= n-1;
        int k = m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while(j>=0)
        {
             nums1[k] = nums2[j];
                j--;
                k--;
        }
    }
};