// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Number Of Dice Rolls:

// (i) Recursion + Memoization:

// int solve(int dice, int face, int target, vector<vector<int>> &dp) {
//   // base case:
//   if (target < 0) {
//     return 0;
//   }
//   if (dice == 0 && target != 0) {
//     return 0;
//   }
//   if (dice != 0 && dice == 0) {
//     return 0;
//   }
//   if (dice == 0 && target == 0) {
//     return 1;
//   }

//   if (dp[dice][target] != -1) {
//     return dp[dice][target];
//   }

//   int ans = 0;
//   for (int i = 1; i <= face; i++) {
//     ans = (ans + solve(dice - 1, face, target - i, dp)) % 1000000007;
//   }
//   return dp[dice][target] = ans;
// }

// // (ii) Tabulation:

// int solveTab(int d, int f, int t) {
//   vector<vector<int>> dp(d + 1, vector<int>(t + 1, 0));
//   dp[0][0] = 1; // base case

//   for (int dice = 1; dice <= d; dice++) {
//     for (int target = 1; target <= t; target++) {

//       int ans = 0;
//       for (int i = 1; i <= f; i++) {
//         if (target - i >= 0) { // check for valid index
//           ans = (ans + dp[dice - 1][target - i]) % 1000000007;
//         }
//       }
//       dp[dice][target] = ans;
//     }
//   }
//   return dp[d][t];
// }

// int numRollsToTarget(int n, int k, int target) {
//   vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
//   return solve(n, k, target, dp);

//   return solveTab(n, k, target);
// }
