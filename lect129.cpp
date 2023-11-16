// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// Q1) Maximum Height by Stacking Cuboids:

// bool check(vector<int> base, vector<int> newBox) {
//   if ((newBox[0] <= base[0]) && (newBox[1] <= base[1]) &&
//       (newBox[2] <= base[2])) {
//     return true;
//   } else {
//     return false;
//   }
// }

// int solveTab(int n, vector<vector<int>> &a) {
//   vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

//   for (int curr = n - 1; curr >= 0; curr--) {
//     for (int prev = curr - 1; prev >= -1; prev--) {
//       // including:
//       int include = 0;
//       if (prev == -1 || check(a[curr], a[prev])) {
//         include = a[curr][2] + dp[curr + 1][curr + 1];
//       }
//       // excluding:
//       int exclude = 0 + dp[curr + 1][prev + 1];

//       dp[curr][prev + 1] = max(include, exclude);
//     }
//   }
//   return dp[0][0];
// }

// int maxHeight(vector<vector<int>> &cuboids) {
//   // step1
//   for (auto &a : cuboids) {
//     sort(a.begin(), a.end());
//   }
//   // step2:
//   sort(cuboids.begin(), cuboids.end());

//   // step3: LIS logic
//   int n = cuboids.size();
//   return solveTab(n, cuboids);
// }
