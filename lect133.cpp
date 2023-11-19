// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Minimum Swaps To Make Sequences Increasing:

//  (i) Recursion + Memoization:

// int solve(vector<int> &nums1, vector<int> &nums2, int index, bool swapped,
//           vector<vector<int>> &dp) {
//   // base case:
//   if (index == nums1.size()) {
//     return 0;
//   }
//   if (dp[index][swapped] != -1) {
//     return dp[index][swapped];
//   }
//   int ans = INT_MAX; // to get minimum value...

//   int prev1 = nums1[index - 1];
//   int prev2 = nums2[index - 1];

//   // important catch:
//   if (swapped) {
//     swap(prev1, prev2);
//   }
//   // no-swap:
//   if (nums1[index] > prev1 && nums2[index] > prev2) {
//     ans = solve(nums1, nums2, index + 1, 0, dp);
//   }
//   // swap:
//   if (nums1[index] > prev2 && nums2[index] > prev1) {
//     ans = min(ans, 1 + solve(nums1, nums2, index + 1, 1, dp));
//   }
//   dp[index][swapped] = ans;
//   return dp[index][swapped];
// }

// int minSwap(vector<int> &nums1, vector<int> &nums2) {
//   nums1.insert(nums1.begin(), -1);
//   nums2.insert(nums2.begin(), -1);

//   bool swapped = 0; // means previous indexes are not swapped...
//   int n = nums1.size();

//   vector<vector<int>> dp(
//       n,
//       vector<int>(2, -1)); // as 2 cols used for swapped -> (0 and 1)
//       values...
//   return solve(nums1, nums2, 1, swapped, dp);
// }


