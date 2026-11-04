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
    unordered_map<Node *, Node*> m;
    Node* copyRandomList(Node* head) {
        if(head == nullptr)
            return nullptr;
        
        if(m.count(head))
            return m[head];
        
        Node* c = new Node(head->val);
        m[head] = c;
        c->next = copyRandomList(head->next);
        c->random = m[head->random];
        return c;

    }
};
