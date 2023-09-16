// #include <iostream>
// using namespace std;

// Q)  MERGESORT IN LINKED LIST:

// class Solution {
// private:
//     ListNode* findMid(ListNode* head){
//        ListNode* slow = head;
//        ListNode* fast = head->next;

//        while(fast != NULL && fast->next != NULL){
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        return slow;
//     }

//     ListNode* merge(ListNode* left, ListNode* right){
//         if(left == NULL){
//             return right;
//         }
//         if(right == NULL){
//             return left;
//         }

//         if(left->val > right->val){
//             ListNode* temp = left;
//             left = right;
//             right = temp;
//         }
//         ListNode* ans = left;

//         while(left != NULL && right != NULL){
//             ListNode* temp = NULL;

//             while(left != NULL && left->val <= right->val){
//                 temp = left;
//                 left = left->next;
//             }
//         temp->next = right;
//         ListNode* temp_swap = left;
//         left = right;
//         right = temp_swap;
//         }
//     return ans;
//     }

// public:
//     ListNode* sortList(ListNode* head) {
//         // base case:
//         if(head == NULL || head->next == NULL){
//             return head;
//         }

//         // finding mid:
//         ListNode* mid = findMid(head);

//         // breaking LL in 2 halves:
//         ListNode* left = head;
//         ListNode* right = mid->next;
//         mid->next = NULL;

//         // recursion sorts both halves:
//         left = sortList(left);
//         right = sortList(right);

//         // merge both the halves
//         ListNode* ans = merge(left, right);

//         return ans;
//     }
// };
