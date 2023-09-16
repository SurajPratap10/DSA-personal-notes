// #include <iostream>
// using namespace std;


// RECURSION:

// int factorial(int n){

//   if(n == 0){
//     return 1;
//   }
//   int small = factorial(n-1);
//   int big = n * small;

//   return big;
// }

// int main() {

//   int n;
//   cin>>n;

//   int ans = factorial(n);

//   cout<<ans<<endl;
// }

// int print(int n) {

//   //Base Case:
//   if (n == 0) {
//     return 1;
//   }

//   //Processing:
//   cout << n << endl;

//   //Recursive Relation:
//   int small = print(n - 1);
//   int big = n * small;

//   return big;
// }

// int main() {
//   int n;
//   cin >> n;
//   print(n);

//   return 0;
// }