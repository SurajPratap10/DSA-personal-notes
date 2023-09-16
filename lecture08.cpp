// #include <iostream>
// using namespace std;

// int main() {

// int ch = '2';
// int num = 2;

// cout << endl;
// switch (ch) {
// case 1:
//   cout << "First" << endl;
//   break;
// case '2':
//   switch (num) {
//   case 2:
//     cout << "Second" << endl;
//     break;
//   }
//   break;
// default:
//   cout << "This is a default case" << endl;
//   break;
// }
// cout << endl;

// FUNCTIONS:

// int power(int a, int b) {

//   int ans = 1;
//   for (int i = 1; i <= b; i++) {
//     ans = ans * a;
//   }
//   return ans;
// }

// int main() {
//   int a, b;
//   cin >> a >> b;
//   int answer = power(a, b);
//   cout << "The answer is: " << answer << endl;
//   return 0;
// }

// int factorial(int n) {
//   int fact = 1;
//   for (int i = 1; i <= n; i++) {
//     fact = fact * i;
//   }
//   return fact;
// }

// int nCr(int n, int r) {
//   int num = factorial(n);
//   int denom = factorial(r) * factorial(n - r);
//   return num / denom;
// }

// int main() {
//   int n, r;
//   cin >> n >> r;
//   cout << nCr(n, r) << endl;
// }
