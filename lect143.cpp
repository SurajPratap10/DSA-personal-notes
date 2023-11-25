// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Buy and Sell Stocks : Part - 5

// Tabulation:

// int solveTab(vector<int> &prices, int fee) {
//   int n = prices.size();
//   vector<vector<int>> dp(n + 1, vector<int>(2, 0));

//   for (int index = n - 1; index >= 0; index--) {
//     for (int buy = 0; buy <= 1; buy++) {
//       // buy and sell conditions:
//       int profit = 0;
//       if (buy == 1) { // buy allowed
//         profit =
//             max((-prices[index] + dp[index + 1][0]), (0 + dp[index + 1][1]));
//       } else { // buy == 0 (not allowed)
//         profit = max((prices[index] + dp[index + 1][1] - fee),
//                      (0 + dp[index + 1][0]));
//       }
//       dp[index][buy] = profit;
//     }
//   }
//   return dp[0][1];
// }
// int maxProfit(vector<int> &prices, int fee) { return solveTab(prices, fee); }
