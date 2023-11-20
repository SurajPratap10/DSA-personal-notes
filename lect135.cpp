// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Longest Arithmetic Subsequence:

// (DP + Hashing):

// (i) Tabulation:

// int longestArithSeqLength(vector<int> &nums) {
//   int n = nums.size();
//   int ans = 0;
//   // base case:
//   //  if(n <= 2){
//   //      return n;
//   //  }
//   unordered_map<int, int> dp[n + 1];

//   for (int i = 1; i < n; i++) {
//     for (int j = 0; j < i; j++) {
//       int diff = nums[i] - nums[j];
//       int count = 1;

//       // check if ans already exists or not:
//       if (dp[j].count(diff)) {
//         count = dp[j][diff];
//       }
//       dp[i][diff] = 1 + count;

//       // ans update:
//       ans = max(ans, dp[i][diff]);
//     }
//   }
//   return ans;
// }
