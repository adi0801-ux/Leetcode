/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* solve(TreeNode* p, TreeNode* q, TreeNode* target){
        if(p==NULL || q==NULL)return NULL;
        if(q->val==target->val)return q;
         TreeNode* leftResult = solve(p->left, q->left, target);
    if (leftResult != NULL) return leftResult;
    
    TreeNode* rightResult = solve(p->right, q->right, target);
    if (rightResult != NULL) return rightResult;
    return NULL;
        
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        return solve(original, cloned, target);
        
    }
};