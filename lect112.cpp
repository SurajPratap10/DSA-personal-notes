// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

//  Q1) Ways to climb Nth - stair:

    // vector<int> dp;

    // int climbStairs(int n) {
    //     dp.resize(n + 1, -1); // Initialize dp with -1 values for indices 0 to n
    //     return climbStairsHelper(n);
    // }

    // int climbStairsHelper(int n) {
    //     if (n <= 2) {
    //         return n;
    //     }
    //     if (dp[n] != -1) {
    //         return dp[n];
    //     }
    //     dp[n] = climbStairsHelper(n - 1) + climbStairsHelper(n - 2);
    //     return dp[n];
    // }


// Q2) MIN COST IN CLIMBING STAIRS:

// (i) Top Down approach:

//     int solve(vector<int>& cost, int n, vector<int> &dp){
//         //base case:
//         if(n == 0){
//             return cost[0];
//         }
//         if(n == 1){
//             return cost[1];
//         }
//         //step3:
//         if(dp[n] != -1){
//             return dp[n];
//         }
//         //step2:
//         dp[n] = cost[n] + min(solve(cost, n-1, dp), solve(cost, n-2, dp));
//         return dp[n];
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();
//         //step1:
//         vector<int> dp(n+1, -1);
//         int ans = min(solve(cost, n-1, dp), solve(cost, n-2, dp));
//         return ans;
//     }


// (ii) Bottom - Up approach:

// int solve(vector<int>& cost, int n){
//   //step1: 
//   vector<int> dp(n+1);
//   //step2:
//   dp[0] = cost[0];
//   dp[1] = cost[1];

//   //step3:
//   for(int i = 2; i <= n; i++){
//     dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
//   }
//   return min(dp[n-1], dp[n-2]);
// }

// int minCostClimbingStairs(vector<int>& cost){
//   int n = cost.size();
//   return solve(cost, n);
// }
