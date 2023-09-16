// #include <iostream>
// using namespace std;

// int arr[10] = {4, 5, 6, 7, 8, 9};

// cout << "address of 1st memory block is: " << arr << endl;
// cout << "address of 1st memory block is: " << &arr[0] << endl;
// cout << "address of 1st memory block is: " << arr[0] << endl;
// cout << "address of 1st memory block is: " << *arr << endl;
// cout << "address of 1st memory block is: " << *arr + 1 << endl;
// cout << "address of 1st memory block is: " << *(arr + 1) << endl;
// cout << "address of 1st memory block is: " << *(arr) + 1 << endl;

// int i = 3;
// cout<<i[arr]<<endl;

// int temp[10] = {32, 43, 4, 2, 4, 8};
// cout << sizeof(temp) << endl;
// cout << sizeof(*temp) << endl;
// cout << sizeof(&temp) << endl;

// int *ptr = &temp[0];
// cout << sizeof(ptr) << endl;
// cout << sizeof(*ptr) << endl;

// int arr[20] = {32, 43, 54, 77};

// cout << &arr << endl;
// cout << arr << endl;
// cout << &arr[0] << endl;

// int *p = &arr[10];
// cout << p << endl;
// cout << &p << endl;
// cout << &p[0] << endl;

// character arrays:

//   int arr[10] = {1, 2, 3, 4, 5, 6};
//   char ch[6] = "abcde";

//   cout << arr << endl;
//   cout << ch << endl;  // isme abcde print hoga bas, address nai
//   cout << &ch << endl; // prints address

//   char *c = &ch[0];
//   cout << c << endl;  // isme abcde print hoga bas, address nai
//   cout << &c << endl; // prints address

// functions:

// void update(int *p) { p = p + 1; }

// int main() {
//   int value = 5;
//   int *p = &value;
//   cout<<update(p)<<endl;
// }

// use int arr[] or inr *arr while passing in getsum() function....

// int getSum(int arr[], int n) {

//   int sum = 0;
//   for (int i = 0; i < n; i++) {
//     sum = sum + arr[i];
//   }
//   return sum;
// }

// int main() {
//   int arr[6] = {1, 2, 3, 4, 5, 8};
//   cout << "Sum is: " << getSum(arr + 3, 3) << endl;
// }