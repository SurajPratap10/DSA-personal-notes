// #include <iostream>
// #include <vector>
// using namespace std;

// Q) Reverse Array:
// vector<int> reverse(vector<int> v) {

//   int s = 0;
//   int e = v.size() - 1;

//   while (s <= e) {
//     swap(v[s], v[e]);
//     s++;
//     e--;
//   }

//   return v;
// }

// void print(vector<int> v) {
//   for (int i = 3; i < v.size(); i++) {
//     cout << v[i] << " ";
//   }
//   cout << endl;
// }
// int main() {

//   vector<int> v;
//   v.push_back(2);
//   v.push_back(12);
//   v.push_back(5);
//   v.push_back(7);
//   v.push_back(3);

//   vector <int> ans = reverse(v);
//   print(ans);

//   return 0;
// }

// CodeStudio

// #include <bits/stdc++.h>
// void reverseArray(vector<int> &arr , int m)
// {
//   int s = m+1;
//   int e = arr.size() - 1;

//   while (s <= e) {
//     swap(arr[s], arr[e]);
//     s++;
//     e--;
//   }
// }

// // Q) Rotate Array:

// void rotate(vector<int> &nums, int k) {
//   int n = nums.size();
//   k = k % n;

// Reverse the entire vector
//   reverse(nums.begin(), nums.end());

// Reverse the first 'k' elements
//   reverse(nums.begin(), nums.begin() + k);

// Reverse the remaining 'n - k' elements
//   reverse(nums.begin() + k,nums.end());
// }

// Q) Merge Sorted Arrays:

// void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {

//   int i = 0;
//   int j = 0;
//   int k = 0;

//   while (i < n && j < m) {
//     if (arr1[i] < arr2[j]) {
//       arr3[k] = arr1[i];
//       k++;
//       i++;
//     } else {
//       arr3[k] = arr2[j];
//       k++;
//       j++;
//     }
//   }

//   // In case elements of arr1[] is over so copy first k element to arr3[]

//   while (i < n) {
//     arr3[k] = arr1[i];
//     k++;
//     i++;
//   }

//   // In case elements of arr2[] is over so copy first k element to arr3[]

//   while (j < m) {
//     arr3[k] = arr2[j];
//     k++;
//     j++;
//   }
// }

// void print(int ans[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout << ans[i] << " ";
//   }
//   cout << endl;
// }

// int main() {
//   int arr1[5] = {1, 3, 5, 7, 9};
//   int arr2[3] = {2, 4, 6};

//   int arr3[8] = {0};

//   merge(arr1, 5, arr2, 3, arr3);

//   print(arr3, 8);
//   return 0;
// }