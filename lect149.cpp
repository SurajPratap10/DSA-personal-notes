// #include <iostream>
// using namespace std;

// DYNAMIC PROGRAMMING (DP):

// GREEDY ALGORTITHMS:

// Q1) N-meetings in One-Room:

// bool cmp (pair<int, int> a, pair<int, int> b){
//   return a.second < b.second;
// }

// int maxMeetings(int start[] int end[], int n){
//   vector<pair<int int>> v;
//   for(int i = 0; i <= n; i++){
//     pair<int, int> p = make_pair(start[i], end[i]);
//     v.push_back(p);
//   }

//   sort(v.begin(), v.end());
//   int cnt = 1;
//   int ansEnd = v[0].second;

//   for(int i = 1; i < n; i++){
//     if(v[i].first > ansEnd){
//       cnt++;
//       ansEnd = v[i].second;
//     }
//   }
//   return cnt;
// }

// Q2) Shop in a candy store:

// vector<int> candyStore(int candies[], int n, int k) {

//   sort(candies.begin(), candies.end());

//   // minimum amount:
//   int mini = 0;
//   int buy = 0;
//   int free = n - 1;

//   while (buy <= free) {
//     mini = mini + candies[buy];
//     buy++;
//     free = free - k;
//   }

//   // maximum amount
//   int maxi = 0;
//   int buy = n - 1;
//   int free = 0;

//   while (free <= buy) {
//     maxi = maxi + candies[buy];
//     buy++;
//     free = free + k;
//   }
//   vector<int> ans;
//   ans.push_back(mini);
//   ans.push_back(maxi);
//   return ans;
// }

// Q3) Check if it's possible to Survive on Island:

// bool isPossibleToSurvive(int N, int S, int M) {
//   int sunday = S / 7;
//   int buyDays = S - S / 7;
//   int totalFood = S * M;
//   int ans = 0;

//   if (totalFood % N == 0) {
//     ans = totalFood / N;
//   } else {
//     ans = totalFood / N + 1;
//   }

//   if (ans <= buyDays) {
//     return ans;
//   } else {
//     return -1;
//   }
// }

// Q4) Reverse words in a string:

// string reverseWords(string , int n) {
//   string ans = "";
//   string temp = "";

//   for (int i = n - 1; i >= 0; i--) {
//     if (s[i] == '.') {
//       reverse(temp.begin(), temp.end());
//       ans = ans + temp;
//       ans.push_back('.');
//       temp = "";
//     } else {
//       temp.push_back(s[i]);
//     }
//   }
//   reverse(temp.begin(), temp.end());
//   ans = ans + temp;
//   return ans;
// }

// Q5) Choclate Distribution Problem:

// long long findMaxDiff(vector<long long> a, long long n, long long m){
//   sort(a.begin(), a.end());
//   int i = 0;
//   int j = n-1;
//   int mini = INT_MAX;

//   while(j <= a.size()){
//     int diff = a[j] - a[i];
//     mini = min(mini, diff);
//     i++;
//     j++;
//   }
//   return mini;
// }
