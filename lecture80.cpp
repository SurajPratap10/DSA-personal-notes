// #include <iostream>
// using namespace std;

// HEAPS:

// Heap order priority consists of 2 types of heaps:

// a) MaxHeap --> Parent Node > Child Node
// b) MinHeap --> Child Node > Parent Node

// 1) INSERTION in MaxHeap:

// void insert(int val){
//   size = size + 1;
//   int i = size;
//   arr[i] = val;
//   while(i > 1){
//     int parent = i/2;
//     if(arr[parent] < arr[i]){
//       swap(arr[parent], arr[i]);
//       i = parent;
//     }
//     else{
//       return;
//     }
//   }
// }

// 2) DELETION in MaxHeap:

// void delete () {
//   if (size == 0) {
//     cout << "Nothing To Delete" << endl;
//     return;
//   }

//   // swap first node(root) with last node:
//   arr[1] = arr[n];
//   // remove last node:
//   size--;
//   // Take root node to it's correct position:
//   int i = 1;
//   while (i < size) {
//     int leftIndex = 2 * i;
//     int rightIndex = 2 * i + 1;

//     if (leftIndex <= size && arr[i] < arr[leftIndex] && arr[leftIndex] >
//     arr[rightIndex]) {
//       swap(arr[i], arr[leftIndex]);
//       i = leftIndex;
//     }

//     if (rightIndex <= size && arr[i] < arr[rightIndex] && arr[rightIndex] >
//     arr[leftIndex]) {
//       swap(arr[i], arr[rightIndex]);
//       i = rightIndex;
//     } else {
//       return;
//     }
//   }
// }

// 3) Heapify Algorithm for MaxHeap: It has 1-based idnexing

// void heapify(int arr[], int n, int i) {
//   int largest = i;
//   int left = 2 * i;
//   int right = 2 * i + 1;

//   if (left <= n && arr[largest] < arr[left]) {
//     largest = left;
//   }
//   if (right <= n && arr[largest] < arr[right]) {
//     largest = right;
//   }
//   if (largest != i) {
//     swap(arr[largest], arr[i]);
//     heapify(arr, n, largest);
//   }
// }

// Q1) Build MinHeap via Heapify: It has 0-based indexing

// void heapify(vector<int> &arr, int n, int i){
//   int smallest = i;
//   //as per 0-based indexing:
//   int left = 2 * i + 1;
//   int right = 2 * i + 2;

//   if(left < n && arr[smallest] > arr[left]){
//     smallest = left;
//   }
//   if(right < n && arr[smallest] > arr[right]){
//     smallest = right;
//   }
//   if(smallest != i){
//     swap(arr[smallest], arr[i]);
//     heapify(arr, n, smallest);
//   }
// }
// vector<int> buildMinHeap(vector<int> &arr)
// {
//     int n = arr.size();
//     for(int i = n/2 - 1; i >= 0; i--){
//         heapify(arr, n, i);
//     }
//     return arr;
// }

// Heap Sort: T.C = O(NlogN)

// void heapSort(int arr[], int n){
//   while(size > 1){
//     swap(arr[size], arr[1]);
//     size--;

//     heapify(arr, size, 1);
//   }
// }

// write heapify functiona s written above.....

// Priority Queue:

// #include <queue>

// priority_queue<int> pq;   // maxHeap
// priority_queue<int> pq;   // minHeap

