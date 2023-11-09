// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// 2D - DP:

// Q1) KNAPSACK PROBLEM:

// (i) Recursion + Memoization:

// int solve(vector<int> &weight, vector<int> &value, int index, int capacity,
// vector<vector<int>> &dp) {
//     // base case:
//     if (index == 0) {
//         if (weight[0] <= capacity) {
//             return value[0];
//         } else {
//             return 0;
//         }
//     }
//     if (dp[index][capacity] != -1) {
//         return dp[index][capacity];
//     }

//     int include = 0;
//     if (weight[index] <= capacity) {
//         include = value[index] + solve(weight, value, index - 1, capacity -
//         weight[index], dp);
//     }
//     int exclude = 0 + solve(weight, value, index - 1, capacity, dp);

//     dp[index][capacity] = max(include, exclude);
//     return dp[index][capacity];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
//     vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
//     return solve(weight, value, n - 1, maxWeight, dp); // You should pass n -
//     1 as the index here.
// }

// (ii) Tabulation:

#include <iostream>
#include <vector>
using namespace std;

// (i) Recursion + Memoization:

// int solve(vector<int> &weight, vector<int> &value, int index, int capacity,
// vector<vector<int>> &dp) {
//     // base case:
//     if (index == 0) {
//         if (weight[0] <= capacity) {
//             return value[0];
//         } else {
//             return 0;
//         }
//     }
//     if (dp[index][capacity] != -1) {
//         return dp[index][capacity];
//     }

//     int include = 0;
//     if (weight[index] <= capacity) {
//         include = value[index] + solve(weight, value, index - 1, capacity -
//         weight[index], dp);
//     }
//     int exclude = 0 + solve(weight, value, index - 1, capacity, dp);

//     dp[index][capacity] = max(include, exclude);
//     return dp[index][capacity];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
//     vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
//     return solve(weight, value, n - 1, maxWeight, dp); // You should pass n -
//     1 as the index here.
// }

// (ii) Tabulation:

// int solveTab(vector<int> &weight, vector<int> &value, int n, int capacity) {
//   // create a dp array:
//   vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));
//   // base case analysis:
//   for (int w = weight[0]; w <= capacity; w++) {
//     if (weight[0] <= capacity)
//       dp[0][w] = value[0];
//     else
//       dp[0][w] = 0;
//   }
//   // handle rest recursive calls:
//   for (int index = 1; index < n; index++) {
//     for (int w = 0; w <= capacity; w++) {
//       int include = 0;

//       if (weight[index] <= w)
//         include = value[index] + dp[index - 1][w - weight[index]];
//       int exclude = 0 + dp[index - 1][w];

//       dp[index][w] = max(exclude, include);
//     }
//   }
//   return dp[n - 1][capacity];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
//   return solveTab(weight, value, n, maxWeight);
// }

// (iii) Space Optimization:

// int solveSpcOpt( vector<int> &weight, vector<int> &value, int n, int capacity
// ) {

// 	// vector<int> prev(capacity+1, 0);
// 	vector<int> curr(capacity+1, 0);
// 	// base case analysis
// 	for( int w = weight[0]; w <= capacity; w++ ){
// 		if(weight[0] <= capacity )
// 			curr[w] = value[0];
// 		else
// 			curr[w] = 0;
// 	}

// 	for( int index = 1; index < n; index++ ) {
// 		for( int w = capacity; w >= 0; w-- ) {
// 			int include = 0;

// 			if( weight[index] <= w )
// 				include = value[index] + curr[w-weight[index]];
// 			int exclude = 0 + curr[w];

// 			curr[w] = max( exclude, include );
// 		}
// 		// prev = curr;
// 	}
// 	return curr[capacity];
// }
