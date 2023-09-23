// #include <iostream>
// using namespace std;

// Queue Interview questions:

// Q1) Queue Reversal:

// #include <bits/stdc++.h>
// #include <stack>
// #include <queue>

// void reverse(std::queue<int> &q) {
//     std::stack<int> s;

//     while (!q.empty()) {
//         int element = q.front();
//         q.pop();
//         s.push(element);
//     }

//     while (!s.empty()) {
//         int element = s.top();
//         s.pop();
//         q.push(element);
//     }
// }

//  Q2) First Negative bumber in a Window of skize K:

// #include <vector>
// #include <deque>

// std::vector<int> firstNegative(std::vector<int> arr, int n, int k) {
//     std::deque<int> dq;
//     std::vector<int> ans;

//     // Process the first window
//     for (int i = 0; i < k; i++) {
//         if (arr[i] < 0) {
//             dq.push_back(i);
//         }
//     }

//     // Push ans for the FIRST window
//     if (!dq.empty()) {
//         ans.push_back(arr[dq.front()]);
//     } else {
//         ans.push_back(0);
//     }

//     // Process the remaining windows
//     for (int i = k; i < n; i++) {
//         // First, pop out of window element
//         if (!dq.empty() && (i - dq.front()) >= k) {
//             dq.pop_front();
//         }

//         // Then, push the current element
//         if (arr[i] < 0) {
//             dq.push_back(i);
//         }

//         // Put in ans
//         if (!dq.empty()) {
//             ans.push_back(arr[dq.front()]);
//         } else {
//             ans.push_back(0);
//         }
//     }

//     return ans;
// }

//     Q3) Reverse Firsr K elements  of a Queue:

// queue<int> reverseElements(queue<int> q, int k)
// {
//     stack<int> s;

//     for(int i = 0; i<k; i++) {
//         int val = q.front();
//         q.pop();
//         s.push(val);
//     }

//     while(!s.empty()) {
//         int val = s.top();
//         s.pop();
//         q.push(val);
//     }

//     int n = q.size();
//     int t = n-k;

//     while(t--) {
//         int val = q.front();
//         q.pop();
//         q.push(val);
//     }

//     return q;
// }

// Q4) First Non-Repeating char in a Stream:

// char firstNonRepeatingCharacter(string str) {

//   map<char, int> m;
// 		    char ans = "";
// 		    queue<char> q;

// 		    for(int i=0; i<str.length(); i++) {
// 		        char ch = str[i];

// 		        q.push(ch);
// 		        m[ch]++;

// 		        while(!q.empty()) {
// 		            if(m[q.front()] > 1){
// 		                q.pop();
// 		            }
// 		            else
// 		            {
// 		                ans.push_back(q.front());
// 		                break;
// 		            }
// 		        }
// 		        if(q.empty()){
// 		            ans.push_back('#');
// 		        }
// 		    }
// 		    return ans;
// 		}

// Q5) Circular Tour OR Gas Station Problem:

// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

// int deficit = 0;
// int balance = 0;
// int start = 0;

// for(int i = 0; i<gas.size(); i++){
//   balance += gas[i] - cost[i];
//   if(balance < 0){
//     deficit += balance;
//     start = i+1;
//     balance = 0;
//   }
// }

// if(deficit + balance >= 0){
//   return start;
// }
// else{
//   return -1;
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

// Q7)  Max and Min sum from sub-array of size K:

// int solve(int *arr, int n, int k) {
//     deque<int> maxi(k);
//     deque<int> mini(k);

//     //Addition of first k size window
//     for(int i=0; i<k; i++) {

//         while(!maxi.empty() && arr[maxi.back()] <= arr[i])
//             maxi.pop_back();

//         while(!mini.empty() && arr[mini.back()] >= arr[i])
//             mini.pop_back();

//         maxi.push_back(i);
//         mini.push_back(i);
//     }

//     int ans = 0;
//     ans += arr[maxi.front()] + arr[mini.front()];

//     //remaining windows ko process karlo
//     for(int i=k; i<n; i++) {

//         //next window process

//         //removal
//         while(!maxi.empty() && i - maxi.front() >=k) {
//             maxi.pop_front();
//         }

//         while(!mini.empty() && i - mini.front() >=k) {
//             mini.pop_front();
//         }

//         //addition
//         while(!maxi.empty() && arr[maxi.back()] <= arr[i])
//             maxi.pop_back();

//         while(!mini.empty() && arr[mini.back()] >= arr[i])
//             mini.pop_back();

//         maxi.push_back(i);
//         mini.push_back(i);

//         ans += arr[maxi.front()] + arr[mini.front()];
//     }
//     return ans;
// }
