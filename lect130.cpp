// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Pizza With 3n Slices:

// (i) Recursion + Memoization:

// int solve(int index, int endIndex, vector<int> &slices, int n,
//           vector<vector<int>> &dp) {
//   // base case:
//   if (n == 0 || index > endIndex) {
//     return 0;
//   }
//   if (dp[index][n] != -1) {
//     return dp[index][n];
//   }
//   int eat =
//       slices[index] + solve(index + 2, endIndex, slices, n - 1, dp); // eat:
//   int notEat = 0 + solve(index + 1, endIndex, slices, n, dp);        // not
//   eat:

//   return dp[index][n] = max(eat, notEat);
// }

// // (ii) Bottom - Up:

// int maxSizeSlices(vector<int> &slices) {
//   int k = slices.size();
//   vector<vector<int>> dp1(k, vector<int>(k, -1));
//   int case1 = solve(0, k - 2, slices, k / 3, dp1);

//   vector<vector<int>> dp2(k, vector<int>(k, -1));
//   int case2 = solve(1, k - 1, slices, k / 3, dp2);

//   return max(case1, case2);
// }

// (ii) Tabulation:

// int solveTab(vector<int> &slices) {
//   int k = slices.size();

//   vector<vector<int>> dp1(k + 2, vector<int>(k + 2, 0));
//   vector<vector<int>> dp2(k + 2, vector<int>(k + 2, 0));

//   // case1:
//   for (int index = k - 2; index >= 0; index--) {
//     for (int n = 1; n <= k / 3; n++) {
//       int eat = slices[index] + dp1[index + 2][n - 1];
//       int notEat = 0 + dp1[index + 1][n];

//       dp1[index][n] = max(eat, notEat);
//     }
//   }
//   int case1 = dp1[0][k / 3];

//   // case2:
//   for (int index = k - 1; index >= 1; index--) {
//     for (int n = 1; n <= k / 3; n++) {
//       int eat = slices[index] + dp2[index + 2][n - 1];
//       int notEat = 0 + dp2[index + 1][n];

//       dp2[index][n] = max(eat, notEat);
//     }
//   }
//   int case2 = dp2[1][k / 3];

//   return max(case1, case2);
// }
