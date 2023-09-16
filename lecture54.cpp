#include <iostream>
using namespace std;

// Q) Sort 0s, 1s, 2s from LL:

// Approach - 1:
// Node* sortList(Node *head){

//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;

//     Node* temp = head;

//     while(temp!=NULL){
//         if(temp->data == 0){
//             zeroCount++;
//         }
//         else if(temp->data == 1){
//             oneCount++;
//         }
//         else if(temp->data == 2){
//             twoCount++;
//         }

//         temp = temp->next;
//     }

//     temp = head;

//     while(temp!=NULL){
//         if(zeroCount != 0){
//             temp->data = 0;
//             zeroCount--;
//         }
//         else if(oneCount != 0){
//             temp->data = 1;
//             oneCount--;
//         }
//         else if(twoCount != 0){
//             temp->data = 2;
//             twoCount--;
//         }
//         temp = temp->next;
//     }
//     return head;
// }

// Approach - 2:
// void insertAtTail(Node* &tail, Node* curr ) {
//     tail -> next = curr;
//     tail = curr;
// }

// Node* sortList(Node *head)
// {
//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead;
//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;
//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;

//     Node* curr = head;

//     // create separate list 0s, 1s and 2s
//     while(curr != NULL) {

//         int value = curr -> data;

//         if(value == 0) {
//             insertAtTail(zeroTail, curr);
//         }
//         else if(value == 1) {
//             insertAtTail(oneTail, curr);
//         }
//         else if(value == 2) {
//             insertAtTail(twoTail, curr);
//         }
//         curr = curr -> next;
//     }

//     //merge 3 sublist

//     // 1s list not empty
//     if(oneHead -> next != NULL) {
//         zeroTail -> next = oneHead -> next;
//     }
//     else {
//         //1s list -> empty
//         zeroTail -> next = twoHead -> next;
//     }

//     oneTail -> next = twoHead -> next;
//     twoTail -> next = NULL;

// 	//setup head
//     head = zeroHead -> next;

////delete dummy nodes:

//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;

//     return head;
// }

// Q) MERGE 2 SORTED LINKED LISTS:

// ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
//   if (list1 == NULL)
//     return list2;

//   if (list2 == NULL)
//     return list1;

//   if (list1->val > list2->val) {
//     ListNode *temp = list1;
//     list1 = list2;
//     list2 = temp;
//   }

//   ListNode *result = list1;
//   while (list1 != NULL && list2 != NULL) {
//     ListNode *temp = NULL;
//     while (list1 != NULL && list1->val <= list2->val) {
//       temp = list1;
//       list1 = list1->next;
//     }
//     temp->next = list2;

//     // Swap
//     ListNode *temp_swap = list1;
//     list1 = list2;
//     list2 = temp_swap;
//   }
//   return result;
// }