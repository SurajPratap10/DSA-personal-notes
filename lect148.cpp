// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// DP + Strings:

// Q1) Wildcard Pattern Matching:

// Recursion + Memoization:

// int solve(string &str, string &pattern, int i, int j, vector<vector<int>>
// &dp){
//     //base case:
//     // (i) string and pattern both finished (Valid pattern)
//     if(i<0 && j<0){
//         return true;
//     }
//     // (ii) string not-finished but pattern finished (Invalid pattern)
//     if(i>=0 && j<0){
//         return false;
//     }
//     // (iii) string finished but pattern not finished
//     // -> if '*' is left then [Valid pattern] but if '*' is not left then
//     [Invalid pattern] if(i<0 && j>=0){
//         for(int k=0; k<=j; k++){
//             if(pattern[k] != '*'){
//                 return false;
//             }
//         }
//         return true;
//     }
//     //dp check:
//     if(dp[i][j] != -1){
//         return dp[i][j];
//     }
//     //Match:
//     if(str[i] == pattern[j] || pattern[j] == '?'){
//         return dp[i][j] = solve(str, pattern, i-1, j-1, dp);
//     }
//     else if(pattern[j] == '*'){
//         return dp[i][j] = (solve(str, pattern, i-1, j, dp) || solve(str,
//         pattern, i, j-1, dp));
//     }
//     else{
//         return false;
//     }
// }
// bool isMatch(string s, string p) {
//     int n = s.size();
//     int m = p.size();

//     vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
//     return solve(s, p, n, m, dp);
// }
