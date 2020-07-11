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
        if(!head)
            return NULL;
        Node* curr=head;
        while(curr){
            if(curr->child){
                Node* nt = curr->next;
                Node* c = curr->child;
                curr->next = c;
                c->prev = curr;
                curr->child =NULL;
                while(c->next)
                    c=c->next;
                c->next = nt;
                if(nt)
                    nt->prev = c;
            } 
            curr=curr->next;
        }
        return head;
    }
};