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
        queue<TreeNode*> q;
        if(root != nullptr)
            q.push(root);
        
        int r = 0;
        while(!q.empty())
        {
            int s = q.size();
            for(int i = 0; i< s; i++)
            {
                TreeNode* n = q.front();
                q.pop();
                if(n->left != nullptr)
                    q.push(n->left);
                if(n->right != nullptr)
                    q.push(n->right);

            }
            r++;
        }
        return r;
    }
};
