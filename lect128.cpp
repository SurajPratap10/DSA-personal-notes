// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Longest Increasing Subsequence:

// (i) Recursion + Memoization:

// int solve(vector<int> &nums, int n, int curr, int prev,
//           vector<vector<int>> &dp) {
//   if (curr == n) {
//     return 0;
//   }
//   if (dp[curr][prev + 1] != -1) {
//     return dp[curr][prev + 1];
//   }
//   // including:
//   int include = 0;
//   if (prev == -1 || nums[curr] > nums[prev]) {
//     include = 1 + solve(nums, n, curr + 1, curr, dp);
//   }
//   // excluding:
//   int exclude = 0 + solve(nums, n, curr + 1, prev, dp);

//   return dp[curr][prev + 1] = max(include, exclude);
// }

// int lengthOfLIS(vector<int> &nums) {
//   int n = nums.size();
//   vector<vector<int>> dp(n, vector<int>(n + 1, -1));
//   return solve(nums, n, 0, -1, dp);
// }

// (ii) Tabulation:

// int solveTab(vector<int> &nums, int n) {
//   vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

//   for (int curr = n - 1; curr >= 0; curr--) {
//     for (int prev = curr - 1; prev >= -1; prev--) {
//       // including:
//       int include = 0;
//       if (prev == -1 || nums[curr] > nums[prev]) {
//         include = 1 + dp[curr + 1][curr + 1];
//       }
//       // excluding:
//       int exclude = 0 + dp[curr + 1][prev + 1];

//       dp[curr][prev + 1] = max(include, exclude);
//     }
//   }
//   return dp[0][0];
// }

// (iii) DP + Binary Search:

// int solveOptimal(int n, int a[]) {
//   if (n == 0)
//     return 0;

//   vector<int> ans;
//   ans.push_back(a[0]);

//   for (int i = 1; i < n; i++) {
//     if (a[i] > ans.back())
//       ans.push_back(a[i]);

//     else {
//       // find index of just bigger element
//       int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
//       ans[index] = a[i];
//     }
//   }

//   return ans.size();
// }

// Q2) Russian Dolls Envelopes:

// static bool comp(vector<int> &a, vector<int> &b) {
//   if (a[0] == b[0]) {
//     return a[1] > b[1];
//   }
//   return a[0] < b[0];
// }

// int solveOptimal(int n, vector<vector<int>> &envelopes) {
//   if (n == 0) {
//     return 0;
//   }
//   vector<int> ans;
//   ans.push_back(envelopes[0][1]);

//   for (int i = 1; i < n; i++) {
//     if (envelopes[i][1] > ans.back()) {
//       ans.push_back(envelopes[i][1]);
//     } else {
//       // find index of just bigger element
//       int index =
//           lower_bound(ans.begin(), ans.end(), envelopes[i][1]) - ans.begin();
//       ans[index] = envelopes[i][1];
//     }
//   }
//   return ans.size();
// }

// int maxEnvelopes(vector<vector<int>> &envelopes) {
//   int n = envelopes.size();
//   sort(envelopes.begin(), envelopes.end(), comp);
//   return solveOptimal(n, envelopes);
// }
