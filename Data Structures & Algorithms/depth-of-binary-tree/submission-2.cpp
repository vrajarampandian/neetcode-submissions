/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode*, int>> s;
        s.push({root, 1});
        int r = 0;
        while(!s.empty())
        {
            pair<TreeNode*, int> c = s.top();
            s.pop();
            TreeNode* n = c.first;
            int d = c.second;
            if(n != nullptr)
            {
                r = max(r, d);
                s.push({n->left, d + 1});
                s.push({n->right, d + 1});
            }
        }
        return r;
    }
};
