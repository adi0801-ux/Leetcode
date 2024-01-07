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
     int solve(TreeNode* node, int& totalTilt) {
        if(node==NULL)return 0;
        int lsum=solve(node->left, totalTilt);
         int rsum=solve(node->right, totalTilt);
         int tilt=abs(lsum-rsum);
         totalTilt+=tilt;
         return lsum+rsum+node->val;
     }
    int findTilt(TreeNode* root) {
        int totalTilt = 0;
        solve(root, totalTilt);
        return totalTilt;
    }

};