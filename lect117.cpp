// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1)  Count Derangements:

// #define MOD 10000000007
// (i) Recursion + Memoization:
// long long solveMem(int n, vector<long long int> &dp){
//     //base case:
//     if(n == 1){
//         return 0;
//     }
//     if(n == 2){
//         return 1;
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     dp[n] =( (n-1)%MOD *( (solveMem(n-1,dp)%MOD) + (solveMem(n-2,dp)%MOD)
//     )%MOD);
//      return dp[n];
// }

// long long int countDerangements(int n){
//     vector<long long int> dp(n+1, -1);
//     return solveMem(n, dp);
// }

// (ii) Tabulation:

// long long int solveTab(int n){
//     vector<long long int> dp(n+1, 0);

//     dp[1] = 0;
//     dp[2] = 1;

//     for(int i = 3; i <= n; i++){
//         long long int first = dp[i-1] % MOD;
//         long long int second = dp[i-2] % MOD;
//         long long int sum = (first + second) % MOD;

//         long long int ans = ((i-1)*sum)%MOD;
//         dp[i] = ans;
//     }
//     return dp[n];
// }

// long long int countDerangements(int n){
//     return solveTab(n);
// }
