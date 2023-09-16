// #include <iostream>
// using namespace std;

// Q) Remove Duplicates from a Sorted/UnSorted Linked List

// Sorted LL:

// Node * removeDuplicates(Node *head)
// {
//     if(head == NULL){
//             return NULL;
//         }
//         Node* curr  = head;
//         while(curr!=NULL){
//             if((curr->next != NULL) && curr->data == curr->next->data){
//                 Node* nodeToDelete = curr->next;
//                 delete(nodeToDelete);
//                 curr->next = curr->next->next;
//             }
//             else{
//                 curr = curr->next;
//             }
//         }
//         return head;
// }
