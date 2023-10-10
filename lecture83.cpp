// #include <iostream>
// using namespace std;

// Heaps Questions:

// Q1) Kth Largest Sum Subarray:

// int getKthLargest(vector<int> &arr, int k){
// 	priority_queue<int,vector<int>,greater<int>> mini;
// 	int n = arr.size();

// 	for(int i = 0; i < n; i++){
// 		int sum = 0;
// 		for(int j = i;j < n; j++){
//             sum += arr[j];
// 			if(mini.size() < k){
//                 mini.push(sum);
// 			}else{
// 				if(sum > mini.top()){
//                     mini.pop();
// 					mini.push(sum);
// 				}
// 			}
// 		}
// 	}
// 	return mini.top();
// }

// Q2) Merge K Sorted Arrays:

// class Node{
//   public:
//     int data;
//     int row;
//     int col;
//     Node(int a, int row, int col){
//         this -> data = a;
//         this -> row = row;
//         this -> col = col;
//     }
// };
// class compare{
//   public:
//     bool operator()(Node* a, Node* b){
//         return a -> data > b -> data;
//     }
// };
// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k){
//     priority_queue<Node*, vector<Node*>, compare> pq;
//     vector<int> ans;
//     for(int i = 0; i < k; i++){
//         Node* temp = new Node(kArrays[i][0], i, 0);
//         pq.push(temp);
//     }
//     while(pq.size() > 0){
//         Node* temp = pq.top();
//         ans.push_back(temp -> data);
//         pq.pop();
//         int row = temp -> row;
//         int col = temp -> col;
//         if(col + 1 < kArrays[row].size()){
//             Node* next = new Node(kArrays[row][col + 1], row, col + 1);
//             pq.push(next);
//         }
//     }
//     return ans;
//

// Q3) Merge K Sorted Lists:

// #include <bits/stdc++.h>
// class compare{
//   public:
//     bool operator()(Node* a, Node* b){
//         return a -> data > b -> data;
//     }
// };
// Node* mergeKLists(vector<Node*> &listArray){
//     priority_queue<Node*, vector<Node*>, compare> pq;
//     int k = listArray.size();
//     if(k == 0)
//         return NULL;
//     for(int i = 0; i < k; i++)
//         if(listArray[i] != NULL)
//             pq.push(listArray[i]);

//     Node* head = NULL;
//     Node* tail = NULL;

//     while(pq.size() > 0){
//         Node* top = pq.top();
//         pq.pop();
//         if(top -> next != NULL)
//             pq.push(top -> next);
//         if(head == NULL){
//             head = top;
//             tail = top;
//         }
//         else{
//             tail -> next = top;
//             tail = top;
//         }
//     }
//     return head;
// }
