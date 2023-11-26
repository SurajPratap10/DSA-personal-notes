// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// DP + Strings:

// Q1) Edit Distance:

// (i) Recursion + Memoization:

// int solve(string &a, string &b, int i, int j, vector<vector<int>> &dp) {
//   // base case: (if length of word1 < word2 || word2 < word1)
//   if (i == a.size()) {
//     return b.size() - j;
//   }
//   if (j == b.size()) {
//     return a.size() - i;
//   }
//   // dp step:
//   if (dp[i][j] != -1) {
//     return dp[i][j];
//   }

//   int ans = 0;
//   if (a[i] == b[j]) {
//     return solve(a, b, i + 1, j + 1, dp);
//   } else {
//     // insert:
//     int insertAns = 1 + solve(a, b, i + 1, j, dp);
//     // delete:
//     int deleteAns = 1 + solve(a, b, i, j + 1, dp);
//     // replace:
//     int replaceAns = 1 + solve(a, b, i + 1, j + 1, dp);

//     ans = min(insertAns, min(deleteAns, replaceAns));
//   }
//   return dp[i][j] = ans;
// }

// int minDistance(string word1, string word2) {
//   int n = word1.size();
//   int m = word2.size();

//   vector<vector<int>> dp(n, vector<int>(m, -1));
//   return solve(word1, word2, 0, 0, dp);
// }
