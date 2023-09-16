// #include <iostream>
// using namespace std;

// Q) Check for SORTED:

// bool isSorted(int arr[], int size) {

//   // Base Case:
//   if (size == 0 || size == 1) {
//     return true;
//   }
//   if (arr[0] > arr[1]) {
//     return false;
//   } else {
//     bool remainingPart = isSorted(arr + 1, size - 1);
//     return remainingPart;
//   }
// }

// int main() {

//   int arr[5] = {2, 4, 6, 8, 9};
//   int size = 5;

//   bool ans = isSorted(arr, size);

//   if (ans) {
//     cout << "Array is sorted" << endl;
//   } else {
//     cout << "Array is not sorted" << endl;
//   }
//   return 0;
// }

// Q) Linear Search:

// bool linearSearch(int arr[], int size, int key) {

//   if (size == 0) {
//     return false;
//   }
//   if (arr[0] == key) {
//     return true;
//   } else {
//     bool remainingPart = linearSearch(arr + 1, size - 1, key);
//     return remainingPart;
//   }
// }

// int main() {
//   int arr[5] = {2, 4, 5, 6, 3};
//   int size = 5;
//   int key = 13;
//   bool ans = linearSearch(arr, size, key);

//   if (ans) {
//     cout << "Present" << endl;
//   } else {
//     cout << "Not Present" << endl;
//   }
// }

// Q) Binary Search:

// bool binarySearch(int arr[], int s, int e, int key) {

//   // Base Case: (element not found)
//   if (s > e) {
//     return false;
//   }

//   int mid = s + (e - s) / 2;

//   // Base Case: (element found)
//   if (arr[mid] == key) {
//     return true;
//   }

//   if (arr[mid] < key) {
//     return binarySearch(arr, mid + 1, e, key);
//   } else {
//     return binarySearch(arr, s, mid - 1, key);
//   }
// }

