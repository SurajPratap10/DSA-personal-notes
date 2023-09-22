// #include<iostream>
// #include<queue>
// using namespace std;

// int main() {
//     cout << (-1)%1<< endl;
//     deque<int> d;

//     d.push_front(12);
//     d.push_back(14);

//     cout << d.front() << endl;
//     cout << d.back() << endl;

//     d.pop_front();

//     cout << d.front() << endl;
//     cout << d.back() << endl;
//     d.pop_back();

//     if(d.empty()) {
//         cout << "queue is empty" << endl;
//     }
//     else{
//         cout << "queue is not empty " << endl;
//     }

//     /*
//     //create a queue
//     queue<int> q;

//     q.push(11);
//     cout << "front of q is: " << q.front() << endl;
//     q.push(15);
//     cout << "front of q is: " << q.front() << endl;

//     q.push(13);
//     cout << "front of q is: " << q.front() << endl;

//     cout << "size of queue is : " << q.size() << endl;

//     q.pop();
//     q.pop();
//     q.pop();

//     cout << "size of queue is : " << q.size() << endl;

//     if(q.empty()) {
//         cout << "Queue is empty " << endl;
//     }
//     else{
//         cout << "queue is not empty " << endl;
//     }
//     */

//     return 0;
// }

// Q1) Implement a Queue:

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
//  bool isEmpty() {
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
//  };

// Q2) Circular Queue:

// class MyCircularQueue {
//     int *arr;
//     int front;
//     int rear;
//     int size;
// public:
//     MyCircularQueue(int k) {
//         this->size = k;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     bool enQueue(int value) {
//         //Queue Full
//         if( isFull()){
//             return false;
//         }

//         //First element push
//         else if(rear==-1 && front==-1){
//             front=0;
//             rear=0;
//             arr[rear]=value;
//         }

//         //Rear at last index (cyclic nature)
//         else if(front!=0 && rear==size-1){
//             rear=0;
//             arr[rear]=value;
//         }

//         //normal condition
//         else{
//             rear++;
//             arr[rear]=value;
//         }
//         return true;
//     }

//     bool deQueue() {
//         //Empty Queue or not
//         if(isEmpty()){
//             return false;
//         }

//         int ans=arr[front];
//         arr[front]=-1;

//         //Single element check
//         if(front==rear){
//             front=-1;
//             rear=-1;
//         }

//         //front at last index (cyclic nature)
//         else if(front==size-1){
//             front=0;
//         }

//         else{
//             front++;
//         }

//         return true;
//     }

//     int Front() {
//          if(isEmpty()) {
//             return -1;
//         }
//         return arr[front];
//     }

//     int Rear() {
//         if(isEmpty()) {
//             return -1;
//         }
//         return arr[rear];
//     }

//     bool isEmpty() {
//         if(front==-1 ){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     bool isFull() {
//         if( (front == 0 && rear == size-1)||(rear == (front-1)%(size)) ){
//             return true;
//         }

//         else{
//             return false;
//         }
//     }
// };

// Q3) Doubly Ended Queue (Dequeue):

// class Deque
// {
//     int *arr;
//     int front;
//     int rear;
//     int size;
// public:
//     // Initialize your data structure.
//     Deque(int n)
//     {
//         size = n;
//         arr = new int[n];
//         front = -1;
//         rear = -1;
//     }

//     // Pushes 'X' in the front of the deque. Returns true if it gets pushed
//     into the deque, and false otherwise. bool pushFront(int x)
//     {
//         //check full or not
//         if( isFull() ) {
//             return false;
//         }
//         else if(isEmpty()) {
//             front  = rear = 0;
//         }
//         else if(front == 0 && rear != size-1) {
//             front = size-1;
//         }
//         else
//         {
//             front--;
//         }
//         arr[front] = x;
//         return true;
//     }

//     // Pushes 'X' in the back of the deque. Returns true if it gets pushed
//     into the deque, and false otherwise. bool pushRear(int x)
//     {
//         if( isFull() ) {
//             return false;
//         }
//         else if(isEmpty()) {
//             front  = rear = 0;
//         }
//         else if(rear == size-1 && front != 0) {
//             rear = 0;
//         }
//         else
//         {
//              rear++;
//         }
//         arr[rear] = x;
//         return true;
//     }

//     // Pops an element from the front of the deque. Returns -1 if the deque
//     is empty, otherwise returns the popped element. int popFront()
//     {
//         if(isEmpty()){//to check queue is empty
//             //cout << "Queue is Empty " << endl;
//             return -1;
//         }

//         int ans = arr[front];
//         arr[front] = -1;

//         if(front == rear) { //single element is present
//             front = rear = -1;
//         }
//         else if(front == size - 1) {
//             front = 0; //to maintain cyclic nature
//         }
//         else
//         {//normal flow
//             front++;
//         }
//         return ans;
//     }

//     // Pops an element from the back of the deque. Returns -1 if the deque is
//     empty, otherwise returns the popped element. int popRear()
//     {
//          if(isEmpty()){//to check queue is empty
//             //cout << "Queue is Empty " << endl;
//             return -1;
//         }

//         int ans = arr[rear];
//         arr[rear] = -1;

//         if(front == rear) { //single element is present
//             front = rear = -1;
//         }
//         else if(rear == 0) {
//             rear = size-1; //to maintain cyclic nature
//         }
//         else
//         {//normal flow
//             rear--;
//         }
//         return ans;
//     }

//     // Returns the first element of the deque. If the deque is empty, it
//     returns -1. int getFront()
//     {
//         if(isEmpty()){
//             return -1;
//         }
//         return arr[front];
//     }

//     // Returns the last element of the deque. If the deque is empty, it
//     returns -1. int getRear()
//     {
//        if(isEmpty()){
//             return -1;
//         }
//         return arr[rear];
//     }

//     // Returns true if the deque is empty. Otherwise returns false.
//     bool isEmpty()
//     {
//         if(front == -1)
//             return true;
//         else
//             return false;
//     }

//     // Returns true if the deque is full. Otherwise returns false.
//     bool isFull()
//     {
// 		if( (front == 0 && rear == size-1) || (front != 0 && rear ==
// (front-1)%(size-1) ) ) {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };


// Q6) K Queues in a single Array:

// class kQueue {

//     public:
//         int n;
//         int k;
//         int *front;
//         int *rear;
//         int *arr;
//         int freeSpot;
//         int *next;

//     public:
//         kQueue(int n, int k) {
//             this -> n = n;
//             this -> k = k;
//             front = new int[k];
//             rear = new int[k];
//             for(int i=0; i<k; i++) {
//                 front[i] = -1;
//                 rear[i] = -1;
//             }

//             next = new int[n];
//             for(int i=0; i<n; i++) {
//                 next[i] = i+1;
//             }
//             next[n-1] = -1;
//             arr = new int[n];
//             freeSpot = 0;
//         }    

//         void enqueue(int data, int qn) {

//             //overflow
//             if( freeSpot == -1) {
//                 cout << "No Empty space is present" << endl;
//                 return;
//             }

//             //find first free index
//             int index = freeSpot;

//             //update freespot
//             freeSpot = next[index];

//             //check whther first element
//             if(front[qn-1] == -1){
//                 front[qn-1] = index;
//             }
//             else{
//                 //link new element to the prev element
//                 next[rear[qn-1]] = index;
//             }

//             //update next
//             next[index] = -1;

//             //update rear
//             rear[qn-1] = index;

//             //push element
//             arr[index] = data;
//         }

//         int dequeue(int qn) {
//             //underflow 
//             if(front[qn-1] == -1)
//             {
//                 cout << "Queue UnderFlow " << endl;
//                 return -1;
//             }

//             //find index to pop
//             int index = front[qn-1];

//             //front ko aage badhao
//             front[qn-1] = next[index];

//             //freeSlots ko manage karo
//             next[index] = freeSpot;
//             freeSpot = index;
//             return arr[index];
//         }

// };
