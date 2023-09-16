// #include <iostream>
// using namespace std;

// int main() {

// ARRAYS:

// accessing
// int number[12];
// cout << "Value at 20th index is: " << number[20] << endl;

// initializing an array
// int second[3] = {3, 4, 5};
// cout << second[1] << endl;

// int third[15] = {3, 4};
// int n = 15;

// for (int i = 0; i < n; i++) {
//   cout << third[i] << endl;
// }

// int fourth[10] = {0};
// int n = 10;
// for (int i = 0; i < n; i++) {
//   cout << fourth[i] << endl;
// }

//   void printArray(int arr[] , int size){
//     for(int i = 0; i<size; i++){
//       cout<<arr[i]<<endl;
//     }
//   }

// int main(){

//   int fourth[10] = {1};
//   int n = 10;
//   printArray(fourth, 10);
// }

// char array
// void printArray(char arr[], char size) {
//   for (int i = 0; i < size; i++) {
//     cout << arr[i] << endl;
//   }
// }

// int main() {

//   char ch[4] = {'a', 'b', 'd', 'e'};
//   int n = 4;
//   printArray(ch, 4);
// }

// MAXIMUM ELEMENT IN AN ARRAY:

// int getMax(int num[], int n) {

//   int max = INT_MIN;

//   for (int i = 0; i < n; i++) {
//     if (num[i] > max) {
//       max = num[i];
//     }
//   }
//   return max;
// }

// int main() {

//   int size;
//   cin >> size;

//   int num[100];

//   for (int i = 0; i < size; i++) {
//     cin >> num[i];
//   }

//   cout << "The largest number in the array is: " << getMax(num, size) <<
//   endl;
// }

// LINEAR SEARCH:

// bool search(int arr[], int size, int key) {
//   for (int i = 0; i < size; i++) {
//     if (arr[i] == key) {
//       return 1;
//     }
//   }
//   return 0;
// }

// int main() {
//   int arr[10] = {1, 23, -3, 4, -45, 9, 54, 19, 6, 79};

//   int key;
//   cin >> key;

//   bool found = search(arr, 10, key);

//   if (found) {
//     cout << "The key is present in the array" << endl;
//   } else {
//     return 0;
//   }
// }

// REVERSE OF AN ARRAY:

// void reverse(int arr[], int n) {

//   int start = 0;
//   int end = n - 1;

//   while (start <= end) {
//     swap(start[arr], end[arr]);
//     start++;
//     end--;
//   }
// }

// void printArray(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// int main() {

//   int arr[6] = {1, 2, 3, 4, 5, 6};
//   int brr[5] = {7, 8, 9, 10, 11};

//   reverse(arr, 6);
//   reverse(brr, 5);

//   printArray(arr, 6);
//   printArray(brr, 5);

//   return 0;
// }