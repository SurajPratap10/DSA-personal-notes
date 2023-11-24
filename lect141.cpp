// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Buy and Sell Stocks : Part - 3

// (i) Recursion + Memoization:

// int solve(int index, int buy, int limit, vector<int> &prices,
//           vector<vector<int>> &dp) {
//   // base case:
//   if (index == prices.size()) {
//     return 0;
//   }
//   if (limit == 0) {
//     return 0;
//   }
//   // dp step:
//   if (dp[index][buy][limit] != -1) {
//     return dp[index][buy][limit];
//   }
//   // buy and sell conditions:
//   int profit = 0;
//   if (buy == 1) { // buy allowed
//     profit = max((-prices[index] + solve(index + 1, 0, limit, prices, dp)),
//                  (0 + solve(index + 1, 1, limit, prices, dp)));
//   } else { // buy == 0 (not allowed)
//     profit = max((prices[index] + solve(index + 1, 1, limit - 1, prices,
//     dp)),
//                  (0 + solve(index + 1, 0, limit prices, dp)));
//   }
//   return dp[index][buy][limit] = profit;
// }
// int maxProfit(vector<int> &prices) {
//   int n = prices.size();
//   vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3,
//   -1))); return solve(0, 1, 2, prices, dp);
// }

// (ii) Tabulation:

// int solveTab(vector<int> &prices) {
//   int n = prices.size();
//   vector<vector<vector<int>>> dp(n + 1,
//                                  vector<vector<int>>(2, vector<int>(3, 0)));

//   for (int index = n - 1; index >= 0; index--) {
//     for (int buy = 0; buy <= 1; buy++) {
//       for (int limit = 1; limit <= 2; limit++) {
//         // buy and sell conditions:
//         int profit = 0;
//         if (buy == 1) { // buy allowed
//           profit = max((-prices[index] + dp[index + 1][0][limit]),
//                        (0 + dp[index + 1][1][limit]));
//         } else { // buy == 0 (not allowed)
//           profit = max((prices[index] + dp[index + 1][1][limit - 1]),
//                        (0 + dp[index + 1][0][limit]));
//         }
//         dp[index][buy][limit] = profit;
//       }
//     }
//   }
//   return dp[0][1][2];
// }

// int maxProfit(vector<int> &prices) { return solveTab(prices); }
// }
// ;
