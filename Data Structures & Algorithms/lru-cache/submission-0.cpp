class Node
{
    public:
        int key;
        int val;
        Node *prev;
        Node *next;
        Node(int k, int v) : key(k), val(v), prev(nullptr), next(nullptr) {

        }
};
class LRUCache {
    private:
    int c;
    unordered_map<int, Node*> cache;
    Node *left;
    Node *right;

    void remove(Node* node)
    {
        Node* p = node->prev;
        Node* n = node->next;
        p->next = n;
        n->prev = p;
    }

    void insert(Node* node)
    {
        Node* prev = right->prev;
        prev->next = node;
        node->prev = prev;
        node->next = right;
        right->prev = node;
    }

public:

    LRUCache(int capacity) {
        c = capacity;
        cache.clear();
        left = new Node(0,0);
        right = new Node(0, 0);
        left->next = right;
        right->prev = left;
    }
    
    int get(int key) {
        if(cache.find(key) != cache.end())
        {
            Node* n = cache[key];
            remove(n);
            insert(n);
            return n->val;
        }
        return -1;

    }
    
    void put(int key, int value) {
        if(cache.find(key) != cache.end()) {
            remove(cache[key]);
        }
        Node* n = new Node(key, value);
        cache[key] = n;
        insert(n);

        if(cache.size() > c)
        {
            Node *lru = left->next;
            remove(lru);
            cache.erase(lru->key);
            delete lru;
        }
    }
};
