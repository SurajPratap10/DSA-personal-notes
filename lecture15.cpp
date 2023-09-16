// #include <iostream>
// using namespace std;

// Binary Search Advanced Problems:

// Q1) BOOK ALLOCATION PROBLEM:

// bool isPossible(vector<int> &arr, int n, int m, int mid) {

//   int studentCount = 1;
//   int pageSum = 0;

//   for (int i = 0; i < n; i++) {
//     if (pageSum + arr[i] <= mid) {
//       pageSum = pageSum + arr[i];
//     } else {
//       studentCount++;
//       if (studentCount > m || arr[i] > mid) {
//         return false;
//       }
//       pageSum = arr[i];
//     }
//   }
//   return true;
// }

// int findPages(vector<int> &arr, int n, int m) {

//   int s = 0;
//   int sum = 0;

//   for (int i = 0; i < n; i++) {
//     sum = sum + arr[i];
//   }

//   int e = sum;
//   int ans = -1;
//   int mid = s + (e - s) / 2;

//   while (s <= e) {

//     if (isPossible(arr, n, m, mid)) {
//       ans = mid;
//       e = mid - 1;
//     } else {
//       s = mid + 1;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return ans;
// }

// Q2) AGGRESSIVE COWS:

// bool isPossible(vector<int> &stalls, int k, int mid){

//     int cowCount = 1;
//     int lastPosition = stalls[0];

//     for(int i = 0;  i<stalls.size(); i ++){
//         if(stalls[i]-lastPosition >= mid){
//             cowCount++;
//             if(cowCount == k){
//                 return true;
//             }
//             lastPosition = stalls[i];
//         }
//     }
//     return false;

// }

// int aggressiveCows(vector<int> &stalls, int k){

//     sort(stalls.begin(), stalls.end()); // Sorting the array...

//     int s = 0;

//     int maxi = -1;
//     for(int i=0; i<stalls.size(); i++){
//         maxi = max(maxi, stalls[i]);
//     }

//     int e = maxi;
//     int ans = -1;
//     int mid = s + (e-s) / 2;


//     while(s<=e){
//         if(isPossible(stalls, k, mid)){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//         mid = s + (e-s) / 2;
//     }
//     return ans;
// }