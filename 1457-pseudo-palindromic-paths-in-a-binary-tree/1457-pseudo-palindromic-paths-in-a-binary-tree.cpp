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
   void dfs(TreeNode * root, vector<int> mp, int &res)
    {
        if(root==NULL)
        {
            return;
        }
        mp[root->val]++;
        if (!root->left && !root->right) {
        int odd = 0;
        for (int i=1; i<10; i++)
            if (mp[i] %2 == 1)
                odd++;

        if (odd <= 1)
            res++;
        }
        dfs(root->left, mp, res);
        dfs(root->right, mp, res);

    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> mp(10, 0);
        int res=0;
        dfs(root, mp, res);
        return res;
    }
};