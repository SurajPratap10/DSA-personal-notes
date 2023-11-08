// #include <iostream>
// using namespace std;
// #include <bits/stdc++.h>
// #define MOD 1000000007

// DYNAMIC PROGRAMMING:

// Q1) PAINTING A FENCE:


// int add(int a , int b){
//     return (a%MOD + b%MOD)%MOD;
// }
// int multi(int a , int b){
//     return (a%MOD *1LL* b%MOD)%MOD;

// }

// (i) Recursion + Memoization:

// int solveMem(int n , int k, vector<int> &dp){
//     //base case
//     if(n==1){
//         return k;
//     }
//     if(n==2){
//         return add(k,multi(k-1,k));
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     dp[n] = add(multi(solveMem(n-2,k, dp),k-1),multi(solveMem(n-1,k, dp),k-1));    
//     return dp[n];

// }

// (ii) Tabulation:

// int solveTab(int n, int k){
//     vector<int> dp(n+1, 0);
//     dp[1] = k;
//     dp[2] = add(k, multi(k, k-1));

//     for(int i=3; i<=n; i++){
//         dp[i] = add(multi(dp[i-2], k-1), multi(dp[i-1], k-1));
//     }
//     return dp[n];

// }
// int numberOfWays(int n, int k) {
//     return solveTab(n,k);
// }
