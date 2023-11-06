// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) House Robbery:

// int solve(vector<int> &nums){
//     int n = nums.size();
//     vector<int> dp(n, 0);

//     dp[0] = nums[0];

//     for(int i = 1; i < n; i++){
//         int include = dp[i-2] + nums[i];
//         int exclude = dp[i-1] + 0;
//         dp[i] = max(include, exclude);
//     }

//     return dp[n-1];
// }

// int houseRobber(vector<int>& valueInHouse){

//     int n = valueInHouse.size();
//     if(n == 1){
//       return valueInHouse[0];
//     }
//   vector<int> first,last;
//   for(int i=0; i<n; i++){
//       if(i!=n-1){
//          first.push_back(valueInHouse[i]);
//       }
//       if(i != 0){
//           last.push_back(valueInHouse[i]);
//       }
//   }
//   return max(solve(first),solve(last));
// }
