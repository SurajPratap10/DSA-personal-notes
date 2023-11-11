// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Minimum Cost For Tickets:

// (i) Recursion + Memoization:

// int solve(int n, vector<int>& days, vector<int>& cost, int index, vector<int>
// &dp){
//     //base case:
//     if(index >= n){
//         return 0;
//     }
//     if(dp[index] != -1){
//         return dp[index];
//     }

//     //1-day pass:
//     int option1 = cost[0] + solve(n, days, cost, index+1,dp);

//     int i;
//     //7-day pass:
//     for(i = index; i < n && days[i] < days[index] + 7; i++);
//     int option2 = cost[1] + solve(n, days, cost, i,dp);

//     //30-day pass:
//     for(i = index; i < n && days[i] < days[index] + 30; i++);
//     int option3 = cost[2] + solve(n, days, cost, i,dp);

//     dp[index] = min(option1, min(option2, option3));
//     return dp[index];
// }

// int minimumCoins(int n, vector<int> days, vector<int> cost){
//     vector<int> dp(n+1, -1);
//     return solve(n, days, cost, 0, dp);
// }

// (ii) Tabulation:

// int solveTab(int n, vector<int> &days, vector<int> &cost{
//   vector<int> dp(n + 1, INT_MAX);
//   // base case:
//   dp[n] = 0;

//   for (int k = n - 1; k >= 0; k--) {
//     // 1 days pass
//     int opt1 = cost[0] + dp[k + 1];

//     int i;
//     // 7 days pass
//     for (i = k; i < n && days[i] < days[k] + 7; i++)
//       ;
//     int opt2 = cost[1] + dp[i];

//     // 30 days pass
//     for (i = k; i < n && days[i] < days[k] + 30; i++)
//       ;
//     int opt3 = cost[2] + dp[i];

//     dp[k] = min(opt1, min(opt2, opt3));
//   }
//   return dp[0];
// }

// int minimumCoins(int n, vector<int> days, vector<int> cost){
//   return solveTab(n, days, cost);
// }

// (ii) Space Optimization:

// int mincostTickets(vector<int>& days, vector<int>& costs{
//     int ans = 0;
//     queue<pair<int, int>> month;
//     queue<pair<int, int>> week;

//     for(int day : days){

//         //step1: remove expired days:
//         while(!month.empty() && month.front().first + 30 <= day){
//             month.pop();
//         }
//         while(!week.empty() && week.front().first + 7 <= day){
//             week.pop();
//         }
//         //step2: add cost for current day:
//         week.push(make_pair(day, ans + costs[1]));
//         month.push(make_pair(day, ans + costs[2]));

//         //step3: ans update:
//         ans = min(ans + costs[0], min(week.front().second,
//         month.front().second));
//     }
//     return ans;
// }
