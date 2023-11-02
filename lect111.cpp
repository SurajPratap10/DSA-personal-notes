// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q) Nth Fibonnaci Number:

// 1) TOP - DOWN approach (Recursion + Memoization):

// int fib(int n, vector<int> &dp){
//     if( n <= 1){
//         return n;
//     }
//     //step - 3
//     if(dp[n] != -1){
//         return dp[n];
//     }
//     //step - 2
//     dp[n] = fib(n-1, dp) + fib(n-2, dp);
//     return dp[n];
// }

// int main(){
//     int n;
//     cin >> n;

//     //step - 1
//     vector<int> dp(n+1);
//     for(int i = 0; i <= n; i++){
//         dp[i] = -1;
//     }

//     cout << fib(n, dp) << endl;

//     return 0;

// }

// 2) BOTTOM - UP approach (Tabulation):

// int fib(int n){
// int n;
// cin >> n;

// // step - 1
// vector<int> dp(n + 1);

// // step - 2
// dp[0] = 0;
// dp[1] = 1;

// // step - 3
// for (int i = 0; i <= n; i++) {
//   dp[i] = dp[i - 1] + dp[i - 2];

//   cout << dp[i] << endl;
// }

// 3) Space Optimization:

// int main() {
//   int n;
//   cin >> n;

//   int prev1 = 1;
//   int prev2 = 2;

//   for (int i = 2; i <= n; i++) {
//     int curr = prev1 + prev2;
//     // shift logic:
//     prev2 = prev1;
//     prev1 = curr;
//   }
//   cour << prev1 << endl;
// }
