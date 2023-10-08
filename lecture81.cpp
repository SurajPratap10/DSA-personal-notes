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

// Q4) 
