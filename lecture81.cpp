// #include <iostream>
// using namespace std;

// Heaps Questions:

// Q1) Kth Smallest Element:

// int kthSmallest(int n,int k,vector<int> Arr){
//     priority_queue<int> pq;  // MaxHeap

//         for (int i = 0; i < k; i++) {
//             pq.push(Arr[i]);
//         }

//         for (int i = k; i < n; i++) {
//             if (Arr[i] < pq.top()) {
//                 pq.pop();
//                 pq.push(Arr[i]);
//             }
//         }
//         return pq.top();
// }

// Q2) Kth Largest Element:

// int findKthLargest(vector<int> &nums, int k) {
//   priority_queue<int, vector<int>, greater<int>> pq; // MinHeap

//   for (int i = 0; i < k; i++) {
//     pq.push(nums[i]);
//   }

//   for (int i = k; i < nums.size(); i++) {
//     if (nums[i] > pq.top()) {
//       pq.pop();
//       pq.push(nums[i]);
//     }
//   }
//   return pq.top();
// };

// Q3) Is Binary Tree Heap:

// int countNode(BinaryTreeNode<int>*root){
//     if(root==NULL){
//         return 0;
//     }
//     int ans=1+countNode(root->left) + countNode(root->right);
//     return ans;
// }

// bool isCBT(BinaryTreeNode<int>* root,int i,int cnt){
//     if(root==NULL){
//         return true;
//     }
//     if(i>=cnt){
//         return false;
//     }
//     else{
//         bool left= isCBT(root->left,2*i+1,cnt);
//         bool right= isCBT(root->right,2*i+2,cnt);
//         return(left && right);
//     }
// }

// bool isMaxOrder(BinaryTreeNode<int>* root){
// //leaf nodes
//     if(root->left==NULL && root->right==NULL){
//         return true;
//     }
//     if (root->right == NULL) {
//         return (root->data >= root->left->data);
//     }
//     else {
//         bool left = isMaxOrder(root->left);
//         bool right = isMaxOrder(root->right);
//         if (left && right && (root->data >= root->left->data) &&
//             (root->data >= root->right->data)) {
//           return true;
//       }
//       else{
//           return false;
//       }

//     }
// }
// bool isBinaryHeapTree(BinaryTreeNode<int>* root){

//     int index=0;
//     int totalCount= countNode( root);
//     if(isCBT(root,index,totalCount) && isMaxOrder(root)){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// Q4) Merge 2 Binary Max Heaps:

// void heapify(vector<int> &arr, int n, int i){
//     //0-Based Indexinf:
//     int largest = i;
//     int left = 2 *  i + 1;
//     int right = 2 * i + 2;

//     if(left < n && arr[largest] < arr[left])
//         largest = left;
//     if(right < n && arr[largest] < arr[right])
//         largest = right;
//     if(largest != i){
//         swap(arr[largest], arr[i]);
//         heapify(arr, n, largest);
//     }
// }
// vector<int> mergeHeap(int n, int m, vector<int> &arr1, vector<int> &arr2) {
//     //merge both arrays:
//     vector<int> arr;
//     for(auto i : arr1){
//         arr.push_back(i);
//     }
//     for(auto i : arr2){
//         arr.push_back(i);
//     }

//     int size = arr.size();
//     for(int i = size/2 - 1; i >= 0; i--){
//         heapify(arr, size, i);
//     }
//     return arr;
// }

// Q5) Minimum cost of Ropes:

// long long connectRopes(int* arr, int n){
// priority_queue<long long , vector<long long>, greater<long long >> pq;
//         for(int i = 0; i < n; i++){
//             pq.push(arr[i]);
//         }

//         long long  cost = 0;

//         while(pq.size() > 1){
//             long long int a = pq.top();
//             pq.pop();

//             long long  b = pq.top();
//             pq.pop();

//             long long  sum = a + b;
//             cost = cost + sum;

//             pq.push(sum);
//         }
//         return cost;
// }

// Q6) Convert BST into Heap:
