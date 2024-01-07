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
    //level order traverse and check if true
  
    void solve(TreeNode* root, int targetSum, bool &flag, vector<int>&path){
        if(root==NULL)return;
        path.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            int sum = 0;
            for (int val : path) {
                sum += val;
            }
            if (sum == targetSum) {
                flag = true;
            }
        }
        solve(root->left, targetSum, flag, path);
        solve(root->right, targetSum, flag, path);
        // int sum=0;
        // for(int i=path.size()-1;i>=0;i--){
        //     sum+=path[i];
        // }
        // if(sum==targetSum)flag=true;
        path.pop_back();
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool flag=false;
        vector<int>path;
        solve(root, targetSum, flag, path);
        
        return flag;
    }
};