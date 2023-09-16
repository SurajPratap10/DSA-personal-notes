// #include <iostream>
// using namespace std;

// LL questions:

// Q) Linked List Cycel I and II:

// Method1: Using MAP:

// ListNode *detectCycle(ListNode *head) {

//        if(head == NULL){
//            return false;
//        }

//        map<ListNode* , bool> visited;
//        ListNode* temp = head;

//        while(temp!=NULL){

//            if(visited[temp] == true){
//                return true;
//            }
//            visited[temp] = true;
//            temp = temp->next;
//        }
//        return false;
//    }

// Method2: Floyd Cycle Detection Algo:

// class Solution {
// public:
//   bool hasCycle(ListNode *head) {
//     if (head == NULL || head->next == NULL) {
//       return false;
//     }

//     ListNode *slow = head;
//     ListNode *fast = head->next;

//     while (fast != NULL && fast->next != NULL) {
//       if (slow == fast) {
//         return true; // Cycle detected
//       }

//       slow = slow->next;       // Move one step
//       fast = fast->next->next; // Move two steps
//     }

//     return false; // No cycle found
//   }
// };



// Q) Detect and Remove Loop from LL:

// Node* floydDetectLoop(Node* head) {

//     if(head == NULL)
//         return NULL;

//     Node* slow = head;
//     Node* fast = head;

//     while(slow != NULL && fast !=NULL) {
        
//         fast = fast -> next;
//         if(fast != NULL) {
//             fast = fast -> next;
//         }

//         slow = slow -> next;

//         if(slow == fast) {
//             return slow;
//         }
//     }

//     return NULL;

// }

// Node* getStartingNode(Node* head) {

//     if(head == NULL) 
//         return NULL;

//     Node* intersection = floydDetectLoop(head);
    
//     if(intersection == NULL)
//         return NULL;
    
//     Node* slow = head;

//     while(slow != intersection) {
//         slow = slow -> next;
//         intersection = intersection -> next;
//     }  

//     return slow;

// }

// Node *removeLoop(Node *head)
// {
//     if( head == NULL)
//         return NULL;

//     Node* startOfLoop = getStartingNode(head);
    
//     if(startOfLoop == NULL)
//         return head;
    
//     Node* temp = startOfLoop;

//     while(temp -> next != startOfLoop) {
//         temp = temp -> next;
//     } 

//     temp -> next = NULL;
//     return head;
// }