// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Longest Palindromic Subsequence (LPS):

// DP + Strings:

// int solveTab(string &a, string &b) {
//   vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, 0));

//   for (int i = a.size() - 1; i >= 0; i--) {
//     for (int j = b.size() - 1; j >= 0; j--) {
//       int ans = 0;
//       // case1: matching
//       if (a[i] == b[j]) {
//         ans = 1 + dp[i + 1][j + 1];
//       }
//       // case2: not-matching:
//       else {
//         ans = 0 + max(dp[i + 1][j], dp[i][j + 1]);
//       }
//       dp[i][j] = ans;
//     }
//   }
//   return dp[0][0];
// }

// int longestPalindromeSubseq(string s) {
//   string revStr = s;
//   reverse(revStr.begin(), revStr.end());
//   int ans = solveTab(s, revStr);
//   return ans;
// }
