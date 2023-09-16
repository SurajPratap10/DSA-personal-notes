// #include <iostream>
// using namespace std;

// STACK INTERVIEW QUESTIONS:

// Q1) Delete middle element of Stack:

//  void solve(stack<int>&inputStack, int count, int size){

//    //base case:

//    if(count == size/2){

//       inputStack.pop();

//       return;

//    }

//    int num = inputStack.top();

//    inputStack.pop();

//    //Recursive Call:

//    solve(inputStack, count+1, size);

//    inputStack.push(num);

// }

// void deleteMiddle(stack<int>&inputStack, int N){

//    int count = 0;

//    solve(inputStack, count, N);

// }

// Q2) Valid Parenthesis:

// stack<char> s;
//      for(int i=0; i<expression.length(); i++) {

//          char ch = expression[i];

//          //if opening bracket, stack push
//          //if close bracket, stacktop check and pop

//          if(ch == '(' || ch == '{' || ch == '['){
//              s.push(ch);
//          }
//          else
//          {
//              //for closing bracket
//              if(!s.empty()) {
//                   char top = s.top();
//                   if( (ch == ')' && top == '(') ||
//                      ( ch == '}' && top == '{') ||
//                      (ch == ']' && top == '[') ) {
//                       s.pop();
//                   }
//                  else
//                  {
//                      return false;
//                  }
//              }
//              else
//              {
//                  return false;
//              }
//          }
//      }

//     if(s.empty())
//         return true;
//     else
//         return false;

// Q3) Insert an element at bootom of a Stack:

// void solve(stack<int> &myStack, int x) {
//   // base case:
//   if (myStack.empty()) {
//     myStack.push(x);
//     return;
//   }

//   int num = myStack.top();
//   myStack.pop();

//   // recursive call:
//   solve(myStack, x);

//   myStack.push(num);
// }
// stack<int> pushAtBottom(stack<int> &myStack, int x) {
//   solve(myStack, x);
//   return myStack;
// }

// Q4) Reverse a Stack using Recursion:

// void insertAtBottom(stack<int> &s, int element) {
//     //basecase
//     if(s.empty()) {
//         s.push(element);
//       	return ;
//     }

//     int num = s.top();
//     s.pop();

//     //recursive call
//     insertAtBottom(s, element);

//     s.push(num);
// }

// void reverseStack(stack<int> &stack) {
//   	//base case
//     if(stack.empty()) {
//         return ;
//     }

//     int num = stack.top();
//     stack.pop();

//     //recursive call
//     reverseStack(stack);

//     insertAtBottom(stack,num);
// }

// Q5) Sort a Stack:

// void sortedInsert(stack<int> &stack, int num) {
//     //base case
//     if(stack.empty() || (!stack.empty() && stack.top() < num) ) {
//         stack.push(num);
//         return;
//     }

//     int n = stack.top();
//     stack.pop();

//     //recusrive call
//     sortedInsert(stack, num);

//     stack.push(n);
// }

// void sortStack(stack<int> &stack)
// {
// 		//base case
//     	if(stack.empty()) {
//             return ;
//         }

//     	int num = stack.top();
//     	stack.pop();

//     	//recursive call
//     	sortStack(stack);

//     	sortedInsert(stack, num);
// }

// Q6) Redundant Brackets:

// #include <stack>

// bool findRedundantBrackets(string &s) {
//   stack<char> st;
//   for (int i = 0; i < s.length(); i++) {
//     char ch = s[i];

//     if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//       st.push(ch);
//     } else {
//       if (ch == ')') {
//         bool isRedundant = true;

//         while (st.top() != '(') {
//           char top = st.top();
//           if (top == '+' || top == '-' || top == '*' || top == '/') {
//             isRedundant = false;
//           }
//           st.pop();
//         }

//         if (isRedundant == true)
//           return true;
//         st.pop();
//       }
//     }
//   }
//   return false;
// }

// Q7) Min Brackets Reversals OR Minimum Cost To Make String Valid:

// int findMinimumCost(string str) {

//   //odd case:
//   if (str.size()%2 == 1){
//     return -1;
//   }

//   stack <char> s;
//   for(int i = 0; i<str.size(); i++){
//     char ch = str[i];

//     if(ch == '{'){
//       s.push(ch);
//     }
//     else{

//       if(!s.empty() && s.top() == '{'){
//         s.pop();
//       }
//       else{
//         s.push(ch);
//       }
//     }

//   }

//   // stack has invalid expression:

//   int a = 0; int b = 0;
//   while(!s.empty()){
//     if(s.top() == '{'){
//       a++;
//     }
//     else{
//       b++;
//     }
//     s.pop();
//   }
//     int ans = (a+1)/2 + (b+1)/2;
//     return ans;
// }