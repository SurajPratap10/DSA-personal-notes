// #include <iostream>
// using namespace std;

// ARRAY PROBLEMS:

// 1) SWAPPING ALTERNATE

// void printArray(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// void swapAlternate(int arr[], int size) {
//   for (int i = 0; i < size; i += 2) {
//     if (i + 1 < size) {
//       swap(arr[i], arr[i + 1]);
//     }
//   }
// }

// int main() {

//   int even[6] = {1, 2, 3, 4, 5, 6};
//   int odd[5] = {7, 8, 9, 10, 11};

//   swapAlternate(even, 6);
//   printArray(even, 6);

//   cout << endl;

//   swapAlternate(odd, 5);
//   printArray(odd, 5);
// }

// 2) Single Number:
// int singleNumber(vector<int>& nums) {

//      int ans = 0;
//      int n = nums.size();

//      for(int i = 0; i<n; i++){
//          ans = ans^nums[i];
//      }
//      return ans;
//  }

// 3) Duplicates in an Array

// int findDuplicate(vector<int>& nums) {

//     int ans = 0;

//   // XOR ing all Array elemnts
//     for(int i = 0; i<nums.size(); i++){
//         ans = ans^nums[i];
//     }

//   // XOR ing [1 n-1]
//     for(int i = 1; i<nums.size(); i++){
//         ans = ans^i;
//     }

//     return ans;
// }

// 4) Intersection of 2 Arrays

// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

//      vector<int> ans;

//      for(int i = 0; i<nums1.size(); i++){
//          int element = nums1[i];

//      for(int j = 0; j<nums2.size(); j++){
//          if(element == nums2[j]){
//              ans.push_back(element);
//              nums2[j] = INT_MIN;
//              break;
//          }
//      }
//  }
//      return ans;

//  }

// optimized approach for intersection of Two Arrays:

// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

//     int i = 0; int j = 0;
//     vector<int> ans;

//     int n = nums1.size();
//     int m = nums2.size();

//     while(i<n && j<m){

//         if(nums1[i] == nums2[j]){
//             ans.push_back(nums1[i]);
//             i++;
//             j++;
//         }
//         else if(nums1[i] < nums2[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     return ans;

// }

// 5) Pair Sum

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    		vector<vector<int>> ans;

//          int n = arr.size();

// 		for(int i = 0; i<n; i++){
// 			for(int j = i+1; j<n; j++){
// 				if(arr[i] + arr[j] == s){

// 					vector<int> temp;
// 					temp.push_back(min(arr[i], arr[j]));
// 					temp.push_back(max(arr[i], arr[j]));
// 					ans.push_back(temp);
// 				}
// 			}
// 		}
//       sort(ans.begin(), ans.end());
// 		return ans;
// }

// 6a) Sort 0 1

// void sortOne(int arr[], int n) {

//   int left = 0;
//   int right = n - 1;

//   while (left < right) {
//     while (arr[left] == 0 && left < right) {
//       left++;
//     }
//     while (arr[right] == 1 && left < right) {
//       right--;
//     }
//     if(arr[left] == 1 && arr[right] == 0 && left < right){
//       swap(arr[left] , arr[right]);
//       left ++ ;
//       right --;
//     }
//   }
// }

// 6b) Sort 0 1 2

// int l = 0;
// int r = n - 1;
// int m = 0;
// while (m <= r) {
//   switch (arr[m]) {
//   case 0:
//     swap(arr[l++], ārr[m++]);
//     break;
//   case 1:
//     m++;
//     break;
//   case 2:
//     swap(arr[m], ārr[r--]);
//     break;
//   }
// }