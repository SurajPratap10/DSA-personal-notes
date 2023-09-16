// #include <iostream>
// using namespace std;

// Q) Palindrome in a Linked List:

// Approach(1):

// class Solution {
// private:
//   bool checkPalindrome(vector<int> arr) {

//     int n = arr.size();
//     int s = 0;
//     int e = n - 1;

//     while (s <= e) {
//       if (arr[s] != arr[e]) {
//         return false;
//       }
//       s++;
//       e--;
//     }
//     return true;
//   }

// public:
//   bool isPalindrome(ListNode *head) {

//     // Create an arr:
//     vector<int> arr;

//     // Copy data from arr to linked list:
//     ListNode *temp = head;
//     while (temp != NULL) {
//       arr.push_back(temp->val);
//       temp = temp->next;
//     }

//     // Apply palindrom logic used in arr:
//     return checkPalindrome(arr);
//   }
// };

// Approach(2):

// class Solution{
//   private:
//     Node* getMid(Node* head ) {
//         Node* slow = head;
//         Node* fast = head -> next;

//         while(fast != NULL && fast-> next != NULL) {
//             fast = fast -> next -> next;
//             slow = slow -> next;
//         }

//         return slow;
//     }
//     Node* reverse(Node* head) {

//         Node* curr = head;
//         Node* prev = NULL;
//         Node* next = NULL;

//         while(curr != NULL) {
//             next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//   public:
//     //Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head)
//     {
//         if(head -> next == NULL) {
//             return true;
//         }

//         //step 1 -> find Middle
//         Node* middle = getMid(head);
//         //cout << "Middle " << middle->data << endl;

//         //step2 -> reverse List after Middle
//         Node* temp = middle -> next;
//         middle -> next = reverse(temp);

//         //step3 - Compare both halves
//         Node* head1 = head;
//         Node* head2 = middle -> next;

//         while(head2 != NULL) {
//             if(head2->data != head1->data) {
//                 return 0;
//             }
//             head1 = head1 -> next;
//             head2 = head2 -> next;
//         }
//         return true;
//     }
// };