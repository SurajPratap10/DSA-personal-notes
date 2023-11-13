// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Minimum Sideways Jumps:

// (i) Tabulation:

// int solve(vector<int>& obstacles, int currlane, int currpos,
// vector<vector<int>> &dp){
//     //base case:
//     int n = obstacles.size() - 1; // as size of obstacle is n+1
//     if(currpos == n){
//         return 0;
//     }
//     if(dp[currlane][currpos] != -1){
//         return dp[currlane][currpos];
//     }
//     //straight jump:
//     if(obstacles[currpos+1] != currlane){
//         return solve(obstacles, currlane, currpos+1, dp);
//     }
//     else{
//         //sideways jump:
//         int ans = INT_MAX;
//         for(int i = 1; i <= 3; i++){
//             if(currlane != i && obstacles[currpos] != i){
//                 ans = min(ans, 1 + solve(obstacles, i, currpos, dp));
//             }
//         }
//         dp[currlane][currpos] = ans;
//         return dp[currlane][currpos];
//     }

// }
// int minSideJumps(vector<int>& obstacles) {
//     vector<vector<int>> dp(4, vector<int> (obstacles.size(), -1));
//     return solve(obstacles, 2, 0, dp);
// }

// (ii) Tabulation:

// int solveTab(vector<int> &obstacles) {
//   int n = obstacles.size() - 1;
//   vector<vector<int>> dp(4, vector<int>(obstacles.size(), 1e9));
//   // base case:
//   dp[0][n] = 0;
//   dp[1][n] = 0;
//   dp[2][n] = 0;
//   dp[3][n] = 0;

//   for (int currpos = n - 1; currpos >= 0; currpos--) {
//     for (int currlane = 1; currlane <= 3; currlane++) {
//       if (obstacles[currpos + 1] != currlane) {
//         dp[currlane][currpos] = dp[currlane][currpos + 1];
//       } else {
//         // sideways jump
//         int ans = 1e9;
//         for (int i = 1; i <= 3; i++) {
//           if (currlane != i && obstacles[currpos] != i)
//             ans = min(ans, 1 + dp[i][currpos + 1]);
//         }
//         dp[currlane][currpos] = ans;
//       }
//     }
//   }
//   return min(dp[2][0], min(1 + dp[1][0], 1 + dp[3][0]));
// }
