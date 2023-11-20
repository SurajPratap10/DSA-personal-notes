// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Longest AP with given Difference d:

// DP + Hashing:

// int longestSubsequence(vector<int> &arr, int difference) {
//   unordered_map<int, int> dp;
//   int ans = 0;

//   for (int i = 0; i < arr.size(); i++) {
//     int temp = arr[i] - difference;
//     int tempAns = 0;

//     // check if ans already exists or not:
//     if (dp.count(temp)) {
//       tempAns = dp[temp];
//     }

//     // current ans update:
//     dp[arr[i]] = 1 + tempAns;

//     // ans update:
//     ans = max(ans, dp[arr[i]]);
//   }
//   return ans;
// }
