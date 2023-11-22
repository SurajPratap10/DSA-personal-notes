// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Guess Number Highes or Lower:

// // (i) Recursion + Memoization:
// int solve(int s, int e, vector<vector<int>> &dp) {
//   // base case: (invlaid range)
//   if (s >= e) {
//     return 0;
//   }
//   if (dp[s][e] != -1) {
//     return dp[s][e];
//   }

//   int maxi = INT_MAX;
//   for (int i = s; i <= e; i++) {
//     maxi = min(maxi, i + max(solve(s, i - 1, dp), solve(i + 1, e, dp)));
//   }
//   return dp[s][e] = maxi;
// }

// // (ii) Tabulation:
// int solveTab(int n) {
//   vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

//   for (int s = n; s >= 1; s--) {
//     for (int e = s; e <= n; e++) {
//       if (s == e) {
//         continue;
//       } else {
//         int maxi = INT_MAX;
//         for (int i = s; i <= e; i++) {
//           maxi = min(maxi, i + max(dp[s][i - 1], dp[i + 1][e]));
//         }
//         dp[s][e] = maxi;
//       }
//     }
//   }
//   return dp[1][n];
// }

// int getMoneyAmount(int n) {
//   // vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
//   // return solve(1, n, dp);

//   return solveTab(n);
// }
