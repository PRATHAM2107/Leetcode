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
    void solve(TreeNode* p, int sum , int &res ) {
        sum = sum*10 + p->val;  
        
        if(p->left != NULL)             
            solve(p->left, sum, res); 

        if(p->right != NULL)  
            solve(p->right, sum, res);

        if(p->right == NULL && p->left ==NULL)
        {
            res+=sum;
        }
    }
         
    int sumNumbers(TreeNode* root) {
        int sum=0, res =0;
        solve(root, sum, res);
        return res;
    }
};