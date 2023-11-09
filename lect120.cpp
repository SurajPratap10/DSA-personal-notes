// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Combination Sum - IV:

// (i) Recursion + Memoization:
// int solveMem(vector<int>& nums, int target, vector<int> &dp){
//     //base case:
//     if(target < 0){
//         return 0;
//     }
//     if(target == 0){
//         return 1;
//     }

//     if(dp[target] != -1){
//         return dp[target];
//     }

//     int ans = 0;
//     for(int i = 0; i < nums.size(); i++){
//         ans += solveMem(nums, target - nums[i], dp);
//     }

//     dp[target] = ans;
//     return dp[target];
// }

// int combinationSum4(vector<int>& nums, int target) {
//  vector<int> dp(target+1, -1);
//  return solveMem(nums, target, dp);
//}

// (ii) Tabulation:

// int solveTab(vector<int>& nums, int target){
//     vector<int> dp(target+1, 0);
//     dp[0] = 1;

//     //traversing from 1 -> target:
//     for(int i = 1; i <= target; i++){
//         //traversing on num vector:
//         for(int j = 0; j < nums.size(); j++){
//             if(i-nums[j] >= 0){
//                 dp[i] += dp[i-nums[j]];
//             }
//         }
//     }
//     return dp[target];
// }

// int combinationSum4(vector<int>& nums, int target) {
//     return solveTab(nums, target);
// }
