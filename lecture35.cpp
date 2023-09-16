// #include <iostream>
// using namespace std;

// // Recursion:

// // Q1) Nth Fibonnaici number:

// // Base Case:
// int fib(int n) {

//   if (n == 0) {
//     return 0;
//   }
//   if (n == 1) {
//     return 1;
//   }

//   // Recursive Relation:
//   int ans = fib(n - 1) + fib(n - 2);
//   return ans;
// }

// // Q2) Climbing Stairs:

// int stairs(int n) {

//   // Base Case:
//   if (n < 0) {
//     return 0;
//   }
//   if (n == 0) {
//     return 1;
//   }

//   // Recursive Relation:
//   int ans = stairs(n - 1) + stairs(n - 2);
//   return ans;
// }