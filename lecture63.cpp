// #include <iostream>
// using namespace std;
// #include <stack>

// Q) Min Stack with [ S.C = T.C = O(1) ]:
// class SpecialStack {
//     stack<int> s;
//     int mini;

// public:
//     void push(int data) {
//         if (s.empty()) {
//             s.push(data);
//             mini = data;
//         } else {
//             if (data < mini) {
//                 s.push(2 * data - mini);
//                 mini = data;
//             } else {
//                 s.push(data);
//             }
//         }
//     }

//     int pop() {
//         if (s.empty()) {
//             return -1; // You can return -1 to indicate an empty stack, or
//             you can throw an exception if you prefer.
//         }

//         int curr = s.top();
//         s.pop();
//         if (curr < mini) {
//             int prevMin = mini;
//             mini = 2 * mini - curr;
//             return prevMin;
//         } else {
//             return curr;
//         }
//     }

//     int top() {
//         if (s.empty()) {
//             return -1; // You can return -1 to indicate an empty stack, or
//             you can throw an exception if you prefer.
//         }

//         int curr = s.top();
//         if (curr < mini) {
//             return mini;
//         } else {
//             return curr;
//         }
//     }

//     bool isEmpty() {
//         return s.empty();
//     }

//     int getMin() {
//         if (s.empty()) {
//             return -1; // You can return -1 to indicate an empty stack, or
//             you can throw an exception if you prefer.
//         }
//         return mini;
//     }
// };
