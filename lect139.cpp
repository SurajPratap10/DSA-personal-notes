// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Buy and Sell Stocks : Part - 1

// int maxProfit(vector<int> &prices) {
//   int n = prices.size();
//   int mini = prices[0]; // assumed to be BUY
//   int profit = 0;

//   for (int i = 1; i < n; i++) {
//     int diff = prices[i] - mini;
//     profit = max(profit, diff);
//     mini = min(mini, prices[i]);
//   }
//   return profit;
// }
