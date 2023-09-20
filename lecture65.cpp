// #include <iostream>
// using namespace std;

// Q) N stacks in an array:

// class NStack
// {

//     int *arr;
//     int *top;
//     int *next;

//     int n, s;
//     int freespot;

// public:
//     // Initialize your data structure.
//     NStack(int N, int S)
//     {
//         n = N;
//         s = S;
//         arr = new int[s];
//         top = new int[n];
//         next = new int[s];

//         //top initialise
//         for(int i=0; i<n; i++) {
//             top[i] = -1;
//         }

//         //next initialise
//         for(int i=0; i<s; i++) {
//             next[i] = i+1;
//         }
//         //update last index value to -1
//         next[s-1] = -1;

//         //initialise freespot
//         freespot = 0;

//     }

//     // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the
//     stack, and false otherwise. bool push(int x, int m)
//     {
//         //check for overflow
//         if(freespot == -1) {
//             return false;
//         }

//         //find index
//         int index = freespot;

//         //insert element into array
//         arr[index] = x;

//         //update freespot
//         freespot = next[index];

//         //update next;
//         next[index] = top[m-1];

//         //update top
//         top[m-1] = index;

//         return true;
//     }

//     // Pops top element from Mth Stack. Returns -1 if the stack is empty,
//     otherwise returns the popped element. int pop(int m)
//     {
//         //check underflow condition
//         if(top[m-1] == -1) {
//             return -1;
//         }

//         int index= top[m-1];

//         top[m-1] = next[index];

//         next[index] = freespot;

//         freespot = index;

//         return arr[index];
//     }
// };

// Q1) Implement a QUEUE:

// class Queue {

//     int* arr;
//     int qfront;
//     int rear;
//     int size;

// public:
//     Queue() {
//         size = 100001;
//         arr = new int[size];
//         qfront = 0;
//         rear = 0;
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         if(qfront == rear) {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     void enqueue(int data) {
//         if(rear == size)
//             cout << "Queue is Full" << endl;
//         else
//         {
//             arr[rear] = data;
//             rear++;
//         }
//     }

//     int dequeue() {
//         if(qfront == rear) {
//             return -1;
//         }
//         else
//         {	int ans = arr[qfront];
//             arr[qfront] = -1;
//             qfront++;
//             if(qfront==rear){
//                 qfront = 0;
//                 rear = 0;
//             }
//          return ans;
//         }
//     }

//     int front() {
//         if(qfront == rear) {
//             return -1;
//         }
//         else
//         {
//             return arr[qfront];
//         }
//     }
// };
