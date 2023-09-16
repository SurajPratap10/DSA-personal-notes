// #include <iostream>
// using namespace std;

// Q) Check if Array Is Sorted and Rotated:

// bool check(vector<int> &nums) {

//   int count = 0;
//   int n = nums.size();

//   for (int i = 1; i < n; i++) {
//     if (nums[i - 1] > nums[i]) {
//       count++;
//     }
//   }

//   if (nums[n - 1] > nums[0]) {
//     count++;
//   }

//   return count <= 1;
// }

// Q) Sum Of Two Arrays:

// vector<int> reverse(vector<int> v) {

//   int s = 0;
//   int e = v.size() - 1;

//   while (s < e) {
//     swap(v[s++], v[e--]);
//   }
//   return v;
// }

// vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m) {

//   int i = n - 1;
//   int j = m - 1;
//   vector<int> ans;
//   int carry = 0;

//   while (i >= 0 && j >= 0) {
//     int val1 = a[i];
//     int val2 = b[j];

//     int sum = val1 + val2 + carry;

//     carry = sum / 10;
//     sum = sum % 10;
//     ans.push_back(sum);
//     i--;
//     j--;
//   }

//   // first case
//   while (i >= 0) {
//     int sum = a[i] + carry;
//     carry = sum / 10;
//     sum = sum % 10;
//     ans.push_back(sum);
//     i--;
//   }

//   // second case
//   while (j >= 0) {
//     int sum = b[j] + carry;
//     carry = sum / 10;
//     int value = sum % 10;
//     ans.push_back(value);
//     j--;
//   }

//   // third case
//   while (carry != 0) {
//     int sum = carry;
//     carry = sum / 10;
//     sum = sum % 10;
//     ans.push_back(sum);
//   }

//   // print(ans);
//   return reverse(ans);
// }