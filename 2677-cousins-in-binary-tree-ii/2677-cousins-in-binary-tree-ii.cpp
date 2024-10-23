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
    void dfs(TreeNode* root, int lvl, vector<int> &sums) {
        if (!root) return;

        if(lvl>=sums.size())
            sums.push_back(root->val);
        else
            sums[lvl] += root->val; 
            
        dfs(root->left, lvl + 1, sums); 
        dfs(root->right, lvl + 1, sums); 
    }

    void dfs2(TreeNode* root, int lvl, vector<int> &sums, int bro) {
        if (!root) return;

        root->val = sums[lvl] - (root->val + bro); 

        int rightbro = root->right ? root->right->val : 0;
        int leftbro = root->left ? root->left->val : 0; 

        if (root->left) 
            dfs2(root->left, lvl + 1, sums, rightbro); 
        
        if (root->right)            
            dfs2(root->right, lvl + 1, sums, leftbro); 
    }


    TreeNode* replaceValueInTree(TreeNode* root) {
        if (!root) 
            return nullptr;
        vector<int> sums;
        dfs(root, 0, sums);
        // for(int i: sums) cout<<i<<endl;
        dfs2(root, 0, sums, 0);
        return root;
    }
};