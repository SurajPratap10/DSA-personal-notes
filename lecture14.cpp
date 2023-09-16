// #include <iostream>
// using namespace std;

// Q1) PIVOT INDEX OF AN ARRAY:

// int getPivot(int arr[], int n) {

//   int s = 0;
//   int e = n - 1;
//   int mid = s + (e - s) / 2;

//   while (s < e) {
//     if (arr[mid] >= arr[0]) {
//       s = mid + 1;
//     } else {
//       e = mid;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return s;
// }

// int main() {

//   int arr[5] = {8, 10, 17, 1, 3};

//   cout << "The Pivot element is: " << getPivot(arr, 5) << endl;
// }

// Q2) SEARCH IN A ROTATED AND SORTED ARRAY:

// Pivot Code:

// int getPivot(int arr[] , int n) {

//   int s = 0;
//   int e = n - 1;
//   int mid = s + (e - s) / 2;

//   while (s < e) {
//     if (arr[mid] >= arr[0]) {
//       s = mid + 1;
//     } else {
//       e = mid;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return s;
// }

// Binary Search Code:

//     int binarySearch(int arr[], int s, int e, int key) {
//     int start = s;
//     int end = e;

//     int mid = start + (end-start) / 2;

//     while (start <= end) {
//         if (arr[mid] == key) {
//         return mid;
//         }
//         else if (key > arr[mid]) {
//         start = mid + 1;

//         } else {
//         end = mid - 1;
//     }
//         mid = start + (end-start) / 2;
//   }
//   return -1;
// }

// Search Code:

// int search(int* arr, int n, int key) {

//         int pivot = getPivot(arr, n );
//         if( key>=arr[pivot] && key <= arr[n-1]){
//             return binarySearch(arr, pivot, n-1 , key);
//         }
//         else{
//             return binarySearch(arr, 0 , pivot - 1,key);
//         }
// }

// Q3) Sqrt(x) using BS :

// long long int binarySearch(int n) {
//   int s = 0;
//   int e = n;
//   long long int mid = s + (e - s) / 2;
//   int ans;

//   while (s <= e) {

//     long long int square = mid * mid;

//     if (square == n) {
//       return mid;
//     } else if (square < n) {
//       ans = mid;
//       s = mid + 1;
//     } else {
//       e = mid - 1;
//     }

//     mid = s + (e - s) / 2;
//   }
//   return ans;
// }

// int mySqrt(int x) { 
//   return binarySearch(x); 
// }