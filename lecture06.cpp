// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() {

//   // int num;
//   // cin >> num;
//   // int i = 0;
//   // int ans = 0;
//   // while (num != 0) {
//   //   int bit = (num & 1);
//   //   ans = (bit * pow(10, i)) + ans;
//   //   num = num >> 1;
//   //   i++;
//   // }
//   // cout<<ans<<endl;

//   int n;
//   cin >> n;

//   int ans = 0;
//   int i = 0;

//   while (n != 0) {
//     int digit = n % 10;
//     if (digit == 1) {
//       ans = ans + pow(2, i);
//     }
//     n = n / 10;
//     i++;
//   }
//   cout << ans << endl;
// }