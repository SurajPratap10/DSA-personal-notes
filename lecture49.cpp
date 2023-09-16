// #include <iostream>
// using namespace std;

// Linked List Questions:

// Q1) Reverse a Linked List:

// Approach: 1
//      ListNode* reverseList(ListNode* head) {
//         ListNode *prev = NULL;
//         ListNode *curr = head;
//         ListNode *forward = NULL;

//         while(curr != NULL){
//             forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;
//     }

// // Approach: 2 (Recursive)
// class Solution {
// private:
//   void reverse(ListNode *&head, ListNode *curr, ListNode *prev) {

//     // base case:
//     if (curr == NULL) {
//       head = prev;
//       return;
//     }
//     ListNode *forward = curr->next;
//     reverse(head, forward, curr);
//     curr->next = prev;
//   }

// public:
//   ListNode *reverseList(ListNode *head) {
//     ListNode *prev = NULL;
//     ListNode *curr = head;
//     reverse(head, curr, prev);
//     return head;
//   }
// };

// Q2) MIDDLE ELEMENT IN LINKED LIST:

// Node* middleNode(Node* head){
//   if(head == NULL){
//     return head;
//   }

//   Node *slow = head;
//   Node *fast = head;

//   while(fast != NULL && fast->next != NULL){
//     slow = slow->next;
//     fast = fast->next->next;
//   }
//   return slow;
// };