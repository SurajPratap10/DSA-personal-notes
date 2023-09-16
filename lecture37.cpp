// #include <iostream>
// using namespace std;

// Reverse a STRING:

// void reverse(int & str, int i , int j){
//   //base case:
//   if(i>j){
//     return;
//   }
//   swap(str[i], str[j]);
//   i++; j--;

//   //recursive call:
//   reverse(str, i, j);
// }

// Check Palindrome:

// void checkPalindrome(int& str, int i , int j){

//   if(i>j){
//     return true;
//   }

//   if(str[i] != str[j]){
//     return false;
//   }

//   else{
//     return checkPalindrome(str, i++, j--);
//   }
// }

// Calculating a^b:

// int power(int a, int b) {

//   // base case:
//   if (b == 0) {
//     return 1;
//   }
//   if (b == 1) {
//     return a;
//   }

//   // recursive call:
//   int ans = power(a, b / 2);

//   // if b is even:
//   if (b % 2 == 0) {
//     return ans * ans;
//   } else {
//     // if b is odd:
//     return a * ans * ans;
//   }
// }

// Bubble Sort:

// void sortArray(int *arr, int size) {

//   // base case:
//   if (size == 0 || size == 1) {
//     return true;
//   }

//   for (int i = 0; i < n - 1; i++) {
//     if (arr[i] > arr[i + 1]) {
//       swap(arr[i], arr[i + 1]);
//     }
//   }

//   // recursive call:
//   sortArray(arr, size - 1);
// }