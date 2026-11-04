/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> old_to_copy;
        old_to_copy[nullptr] = nullptr;
        Node* c = head;
        while(c != nullptr)
        {
            Node *c1 = new Node(c->val);
            old_to_copy[c] = c1;
            c = c->next;
        }

        c = head;
        while(c != nullptr)
        {
            Node* c1 = old_to_copy[c];
            c1->next = old_to_copy[c->next];
            c1->random = old_to_copy[c->random];
            c = c->next;
        }
        return old_to_copy[head];
    }
};
