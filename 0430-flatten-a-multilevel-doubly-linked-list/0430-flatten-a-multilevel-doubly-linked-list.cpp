/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL){
            return head;
        }

        Node* curr = head;
        while(curr != NULL){
            if(curr->child != NULL){
                //store the address for next node
                Node*next = curr->next; 

                //flatten the list
                curr->next = flatten(curr->child);

                curr->next->prev = curr;
                curr->child = NULL; 

                //finding the tail
                while(curr->next != NULL){
                    curr = curr->next; 
                }

                //attach tail with next pointer
                if(next != NULL){
                    curr->next = next;
                    next->prev = curr; 
                }
            }
            curr = curr->next; 
        }
        return head;
    }
};