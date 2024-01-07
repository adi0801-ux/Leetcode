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
     int calculateTilt(TreeNode* node, int& totalTilt) {
        if (node == nullptr) {
            return 0;
        }

        // Calculate the sum of values in the left and right subtrees
        int leftSum = calculateTilt(node->left, totalTilt);
        int rightSum = calculateTilt(node->right, totalTilt);

        // Calculate the tilt of the current node
        int tilt = std::abs(leftSum - rightSum);
        totalTilt += tilt;

        // Return the sum of values in the subtree rooted at the current node
        return leftSum + rightSum + node->val;
    }
    int findTilt(TreeNode* root) {
        int totalTilt = 0;
        calculateTilt(root, totalTilt);
        return totalTilt;
    }

};