// #include <iostream>
// using namespace std;

// Q1) Smallest Range in K-Sorted List:

// class Node{
//     public:
//     int data;
//     int row;
//     int col;

//     Node(int d, int r, int c){
//         data = d;
//         row = r;
//         col = c;
//     }
// };

// class compare{
//     public:
//     bool operator()(Node* a, Node* b){
//         return a->data > b->data;
//     }
// };

// int kSorted(vector<vector<int>> &a, int k, int n) {
//     int mini = INT_MAX;
//     int maxi = INT_MIN;
//     priority_queue<Node*, vector<Node*>, compare> pq;

//     for(int i = 0; i < k; i++){
//         int element = a[i][0];
//         mini = min(mini, element);
//         maxi = max(maxi, element);
//         pq.push(new Node(element, i, 0));
//     }

//     int start = mini;
//     int end = maxi;

//     while(!pq.empty()){
//         Node* temp = pq.top();
//         pq.pop();
//         mini = temp->data;

//         if(maxi - mini < end - start){
//             start = mini;
//             end = maxi;
//         }
//         if(temp->col+1 < n){
//             maxi = max(maxi, a[temp->row][temp->col+1]);
//             pq.push(new Node(a[temp -> row][temp -> col + 1], temp -> row,
//             temp -> col + 1));
//         }
//         else{
//             break;
//         }
//     }
//     return (end-start+1);
// }

// Q2) Median in a Stream:

// int signum(int a, int b) {
// 	if(a == b)
// 		return 0;
// 	else if(a > b)
// 		return 1;
// 	else
// 		return -1;
// }
// void callMedian(int element, priority_queue<int> &maxHeap,
// priority_queue<int, vector<int>, greater<int>> &minHeap, int &median) {
// 	switch(signum(maxHeap.size(), minHeap.size())){
// 		case 0:{
// 			if(element > median){
// 				minHeap.push(element);
// 				median = minHeap.top();
// 			}
// 			else{
// 				maxHeap.push(element);
// 				median = maxHeap.top();
// 			}
// 			break;
// 		}
// 		case 1:{
// 			if(element > median){
// 				minHeap.push(element);
// 				median = (minHeap.top() + maxHeap.top()) / 2;
// 			}
// 			else{
// 				minHeap.push(maxHeap.top());
// 				maxHeap.pop();
// 				maxHeap.push(element);
// 				median = (minHeap.top() + maxHeap.top()) / 2;
// 			}
// 			break;
// 		}
// 		case -1:{
// 			if(element > median){
// 				maxHeap.push(minHeap.top());
// 				minHeap.pop();
// 				minHeap.push(element);
// 				median = (minHeap.top() + maxHeap.top()) / 2;
// 			}
// 			else{
// 				maxHeap.push(element);
// 				median = (minHeap.top() + maxHeap.top()) / 2;
// 			}
// 			break;
// 		}
// 	}
// }
// vector<int> findMedian(vector<int> &arr, int n) {
// 	// Write your code here
// 	vector<int> ans;
// 	priority_queue<int> maxHeap;
// 	priority_queue<int, vector<int>, greater<int>> minHeap;
// 	int median = 0;
// 	for(int i = 0; i < n; i++)
// 	{
// 		callMedian(arr[i], maxHeap, minHeap, median);
// 		ans.push_back(median);
// 	}
// 	return ans;
// }
