// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Partition Equal Subset Sum:

// (i) Recursion + Memoization:

// bool solve(int index, vector<int>& nums, int n, int target,
// vector<vector<int>> &dp){
//     //base case:
//     if(index >= n){
//         return false;
//     }
//     if(target < 0){
//         return false;
//     }
//     if(target == 0){
//         return true;
//     }

//     if(dp[index][target] != -1){
//         return dp[index][target];
//     }
//     //include or exclude:
//     bool include = solve(index+1, nums, n, target - nums[index], dp);
//     bool exclude = solve(index+1, nums, n, target, dp);

//     return dp[index][target] = include || exclude;  //OR
// }

// bool canPartition(std::vector<int>& nums){
//     int n = nums.size();

//     int totalSum = 0;
//     for(int i = 0; i < n; i++){
//         totalSum += nums[i];
//     }
//     //totalSum is odd:
//     if(totalSum & 1){
//         return false;
//     }
//     //totalSum is even:
//     int target = totalSum / 2;

//     vector<vector<int>> dp(n, vector<int> (target+1, -1));
//     return solve(0, nums, n, target, dp);

// }

// (ii) Tabulation:

// bool solveTab(int n, vector<int> &nums, int totalSum) {
//   vector<vector<int>> dp(n + 1, vector<int>(totalSum + 1, 0));
//   // base case:
//   for (int i = 0; i <= n; i++) {
//     dp[i][0] = 1;
//   }

//   for (int index = n - 1; index >= 0; index--) {
//     for (int target = 0; target <= totalSum / 2; target++) {

//       bool include = 0;
//       if (target - nums[index] >= 0)
//         include = dp[index + 1][target - nums[index]];
//       bool exclude = dp[index + 1][target];

//       dp[index][target] = include || exclude;
//     }
//   }
//   return dp[0][totalSum / 2];
// }

// bool canPartition(vector<int>& nums){
//     int n = nums.size();

//     int totalSum = 0;
//     for(int i = 0; i < n; i++){
//         totalSum += nums[i];
//     }
//     //totalSum is odd:
//     if(totalSum & 1){
//         return false;
//     }
//     //totalSum is even:
//     int target = totalSum / 2;

//     return solveTab(n, nums, totalSum);
// }

// (iii) Space Optimization:

// bool solveSpaceOP(int total, int arr[], int N) {
//   vector<int> curr(total / 2 + 1);
//   vector<int> next(total / 2 + 1);

//   curr[0] = 1;
//   next[0] = 1;

//   for (int index = N - 1; index >= 0; index--) {
//     for (int target = 0; target <= (total / 2); target++) {

//       bool include = 0;

//       if (target - arr[index] >= 0)
//         include = next[target - arr[index]];

//       bool exclude = next[target - 0];

//       curr[target] = (include or exclude);
//     }

//     next = curr;
//   }

//   return next[total / 2];
// }
