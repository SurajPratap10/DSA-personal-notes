// #include <iostream>
// using namespace std;

// int main() {

// int a = 4;
// int b = 5;
// int c = a & b;
// int d = a | b;
// int e = a ^ b;
// int f = ~b;

// cout << c << endl;
// cout << d << endl;
// cout << e << endl;
// cout << f << endl;

// cout << (17 >> 2) << endl;

// int i = 7;
// cout << (++i) << endl;
// cout << (i++) << endl;

// int n;
// cin >> n;
// int i;
// for (int i = 0; i <= n; i++) {
//   cout << i << endl;
// }

// for (int a = 0, b = 1; a >= 0 && b >= 1; a--, b--) {
//   cout << a << " " << b << endl;
// }

// Sum of N numbers:

// int n;
// cin >> n;
// int sum = 0;
// for (int i = 1; i <= n; i++) {
//   sum = sum + i;
// }
// cout << sum << endl;

// Fibonnaci Series:

// int n;
// cin >> n;

// int a = 0;
// int b = 1;

// for (int i = 1; i <= n; i++) {
//   int nextNum = a + b;
//   cout << nextNum << endl;
//   a = b;
//   b = nextNum;
// }

// Prime Numbers:

// int n;
// cin >> n;
// for (int i = 2; i < n; i++) {
//   if (n % i == 0) {
//     cout << "The number is not Prime" << endl;
//   } else {
//     cout << "The number is Prime" << endl;
//   }
// }

// LEETCODE QUESTION (1):

//         int prod = 1;
//         int sum = 0;

//         while(n!=0){

//         int digit = n % 10;
//         prod = prod * digit;
//         sum = sum + digit;

//         n = n/10;

//         }
//         int result = prod - sum ;
//         return result;
//     }

// int count = 0;
// while(n!=0){
//   if(n&1){
//     count++;
//   }
//   n = n >> 1;
// }
// return count;
// }