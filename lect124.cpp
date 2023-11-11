// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Maximal Square:

// // (i) Recursion + Memoization:

// int solveMem(vector<vector<int>> &MAT, int i, int j, int &maxi,
// vector<vector<int>> &dp){
//     if (i >= MAT.size() || j >= MAT[0].size()) {
//         return 0;
//     }

//     if(dp[i][j] != -1){
//         return dp[i][j];
//     }

//     // Condition check to extend squares:
//     int right = solveMem(MAT, i, j + 1, maxi, dp);
//     int diagonal = solveMem(MAT, i + 1, j + 1, maxi, dp);
//     int down = solveMem(MAT, i + 1, j, maxi, dp);

//     // Current element is 1 (square can be formed):
//     if (MAT[i][j] == 1) {
//         dp[i][j] = 1 + min(right, min(diagonal, down));
//         maxi = max(maxi, dp[i][j] * dp[i][j]); // Update with square of side
//         length return dp[i][j];
//     } else {
//         return dp[i][j] = 0; // Square can't be formed
//     }
// }

// int maximumAreaSquare(vector<vector<int>> &MAT, int n, int m){
//     int maxi = 0;
//     vector<vector<int>> dp(n, vector<int> (m, -1));
//     solveMem(MAT, 0, 0, maxi, dp);
//     return maxi; // Return maxi instead of solveMem
// }

// // (ii) Tabulation:

// (ii) Tabultaion:

// int solveTab(vector<vector<int>> &MAT, int &maxi) {
//   int row = MAT.size();
//   int col = MAT[0].size();
//   vector<vector<int>> dp(row + 1, vector<int>(col + 1, 0));

//   for (int i = row - 1; i >= 0; i--) {
//     for (int j = col - 1; j >= 0; j--) {
//       // Condition check to extend squares:
//       int right = dp[i][j + 1];
//       int diagonal = dp[i + 1][j + 1];
//       int down = dp[i + 1][j];

//       // Current element is 1 (square can be formed):
//       if (MAT[i][j] == 1) {
//         dp[i][j] = 1 + min(right, min(diagonal, down));
//         maxi =
//             max(maxi, dp[i][j] * dp[i][j]); // Update with square of side
//             length
//       } else {
//         dp[i][j] = 0; // Square can't be formed
//       }
//     }
//   }
//   return dp[0][0];
// }

// int maximumAreaSquare(vector<vector<int>> &MAT, int n, int m) {
//   int maxi = 0;
//   solveTab(MAT, maxi);
//   return maxi;
// }
